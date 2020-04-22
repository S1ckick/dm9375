#include "polynomsumwindow.h"
#include "ui_polynomsumwindow.h"
#include "header.h"
#include <QDebug>
PolynomSumWindow::PolynomSumWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolynomSumWindow)
{
    ui->setupUi(this);
}

PolynomSumWindow::~PolynomSumWindow()
{
    delete ui;
}

void PolynomSumWindow::on_back_clicked()
{
        this->close();
        emit firstWindow();
}
bool sortbysec(const std::pair<RationalFraction,int> &a,
               const std::pair<RationalFraction,int> &b)
{
    return (a.second > b.second);
}

Polynom read_pol(std::string polynom1)
{
    unsigned int i=0;
    std::vector<std::pair<RationalFraction,int>> mas;
    while(i<=polynom1.length()-1)
    {
        if (polynom1[i]=='+' || polynom1[i]=='-')
        {
            std::string numenator;
            if (polynom1[i]=='-')
                numenator+=polynom1[i];
            i++;

            while(polynom1[i]!='/')
            {
                numenator+=polynom1[i];
                i++;
            }
            i++;
            std::string denominator;
            while(polynom1[i]!='x')
            {
                denominator+=polynom1[i];
                i++;
            }
            i+=2;
            int degree=0;
            std::string str_degree;
            while(polynom1[i]!='+' && polynom1[i]!='-' && i!=polynom1.length())
            {
                str_degree+=polynom1[i];
                i++;
            }
            degree=QString::fromStdString(str_degree).toInt();
            RationalFraction rational(numenator,denominator);
            mas.push_back(std::make_pair(rational,degree));
        }

    }
    std::sort(mas.begin(),mas.end(),sortbysec);
    qDebug()<<mas[1].second;
    RationalFraction *coef = new RationalFraction[mas[0].second+1];
    for (unsigned i=0;i<mas.size();i++)
        coef[mas[i].second]=mas[i].first;
    Polynom poli(coef,mas[0].second);
    return poli;
}

QString write_pol(Polynom poli)
{
    std::string str_pol;
    for(int i=poli.degree;i>=0;i--)
    {
        if (poli.coef[i].numenator.number.coef[0]!=0)
        {
            if (poli.coef[i].numenator.sign==plus_sign && i!=poli.degree)
                str_pol+="+";
            str_pol+=poli.coef[i].numenator.ToString();
            str_pol+="/";
            str_pol+=poli.coef[i].denominator.ToString();
            str_pol+="x^";
            str_pol+=std::to_string(i);
        }
    }
    return QString::fromStdString(str_pol);
}

void PolynomSumWindow::on_result_clicked()
{
        std::string polynom1 = ui->polynom1->text().toStdString();
        std::string polynom2 = ui->polynom2->text().toStdString();
        Polynom poli1 = read_pol(polynom1);
        Polynom poli2 = read_pol(polynom2);
        Polynom poli_out = ADD_PP_P(poli1,poli2);
        ui->result_out->setText(write_pol(poli_out));

}

