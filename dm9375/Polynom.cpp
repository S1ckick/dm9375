#include "header.h"
using namespace std;
Polynom::Polynom()
{
    coef = new RationalFraction[1];
    coef[0] = RationalFraction();
    degree = 0;
}

Polynom::~Polynom()
{
    delete[] coef;
}

Polynom::Polynom(const Polynom &polynom)
{
    degree = polynom.degree;
    delete[] coef;
    coef = new RationalFraction[degree + 1];
    for (int i = 0; i <= degree; i++)
        coef[i] = RationalFraction(polynom.coef[i]);
}

Polynom::Polynom(RationalFraction *coef, int degree)
{
    this->degree = degree;
    this->coef = new RationalFraction[degree + 1];
    for (int i = 0; i <= degree; i++)
        this->coef[i] = coef[i];
}

Polynom &Polynom::operator=(Polynom const &polynom)
{
    degree = polynom.degree;
    delete[] coef;
    coef = new RationalFraction[degree + 1];
    for (int i = 0; i <= degree; i++)
        coef[i] = RationalFraction(polynom.coef[i]);
    return *this;
}

Polynom::Polynom(poly pol, int degree)
{
    this->degree = degree;
    delete[] coef;
    coef = new RationalFraction[degree + 1];
    for (int i = 0; i <= degree; i++)
        coef[i] = RationalFraction(pol[i].first, pol[i].second);
}
poly Polynom::ToString()
{
    poly pol;
    for (int i = 0; i <= degree; i++)
        pol.push_back(make_pair(coef[i].numenator.ToString(), coef[i].denominator.ToString()));
    pol.push_back(make_pair("end", "end"));
    return pol;
}

RationalFraction *resize(RationalFraction *arr, int size, int oldSize)
{
    RationalFraction *nArr = new RationalFraction[max(size, 1)];

    for (int i = 0; i < min(size, oldSize); i++)
        nArr[i] = arr[i];

    if (arr)
        delete[] arr;

    return nArr;
}

/*********************************************************/
/*MODULES*/

//Герасимов Вадим 9375 *
Polynom ADD_PP_P(Polynom first, Polynom second)
{
    int i, deg;
    Polynom result;
    RationalFraction current;
    RationalFraction *coef;

    if (first.degree < second.degree)
        return ADD_PP_P(second, first);

    coef = new RationalFraction[first.degree + 1];

    result.degree = first.degree;

    deg = first.degree - second.degree;
    for (i = 0; i < deg; ++i)
        coef[i] = first.coef[i];

    for (i = deg; i <= first.degree; i++)
        coef[i] = ADD_QQ_Q(first.coef[i], second.coef[i - deg]);
    result = Polynom(coef, result.degree);

    delete[] coef;

    return result;
}

//Герасимов Вадим 9375 *
Polynom SUB_PP_P(Polynom first, Polynom second)
{
    int i, deg;
    Polynom result;
    RationalFraction current;
    RationalFraction *coef;

    if (first.degree < second.degree)
    {
        result = SUB_PP_P(second, first);

        for (int i = 0; i <= result.degree; i++)
            result.coef[i].numenator = MUL_ZM_Z(result.coef[i].numenator);

        return result;
    }

    coef = new RationalFraction[first.degree + 1];

    result.degree = first.degree;

    deg = first.degree - second.degree;
    for (i = 0; i < deg; ++i)
        coef[i] = first.coef[i];

    for (i = deg; i <= first.degree; i++)
        coef[i] = SUB_QQ_Q(first.coef[i], second.coef[i - deg]);

    i = 0;
    while (i < result.degree && !NZER_N_B(coef[i].numenator.number))
    {
        i++;
    }

    result = Polynom(coef, result.degree);

    delete[] coef;

    return result;
}

//Данилеску Игорь 9375
Polynom MUL_PQ_P(Polynom poli, RationalFraction frank)
{
    for (int i = 0; i <= poli.degree; ++i)
        poli.coef[i] = MUL_QQ_Q(poli.coef[i], frank);
    return poli;
}

//Бухтияров Марат 9375
Polynom MUL_Pxk_P(Polynom inputValue, int changeDegree)
{
    //функция произведения многочлена на x^k, где k - changeDegree
    // inputValue - входное значение многочлена
    // changeDegree - изменение степени многочлена (степень икса, на который идёт умножение)
    int newDegree = inputValue.degree + changeDegree;
    RationalFraction *newCoef = new RationalFraction[newDegree + 1];
    for (int i = 0; i <= inputValue.degree; i++)
    {
        newCoef[i] = inputValue.coef[i];
    }
    inputValue.degree = newDegree;
    inputValue.coef = newCoef;
    return inputValue; //возвращает из функции новый многочлен
}

//Степанова Мария 9375 *
RationalFraction LED_P_Q(Polynom polynom)
{
    return polynom.coef[0];
}

//Бухтияров Марат 9375
int DEG_P_N(Polynom inputValue)
{
    //Фуункция возвращающая значение степени многочлена
    int currentCoef = 0;
    while ((currentCoef < inputValue.degree + 1))
    {
        //цикл ищет первый ненулевой коэффициент при наибольшей степени
        if (inputValue.coef[currentCoef].numenator.number.coef != 0)
            return inputValue.degree - currentCoef; //Если коэффициент был найден, то возвращает
                                                    //значение соответствующей ему степени
        ++currentCoef;
    }
    return -1; //вернёт это значение, если все коэффициенты равны 0,  включая свободный член
}

//Заречная Юлия 9375 *
Polynom FAC_P_Q(Polynom polynom)
{
    BigNatural NOD;
    BigNatural NOK;
    RationalFraction NN;

    NOD = TRANS_Z_N(polynom.coef[0].numenator);
    NOK = polynom.coef[0].denominator;

    for (int i = 0; i <= polynom.degree; i++)
    {
        NOD = GCF_NN_N(NOD, TRANS_Z_N(polynom.coef[i].numenator));
        NOK = LCM_NN_N(NOK, polynom.coef[i].denominator);
    }
    NN.numenator = TRANS_N_Z(NOK);
    NN.denominator = NOD;

    return MUL_PQ_P(polynom, NN);
}

//Данилеску Игорь 9375
Polynom MUL_PP_P(Polynom poli1, Polynom poli2)
{
    int productSize = poli1.degree + poli2.degree;
    RationalFraction *productCoef = new RationalFraction[productSize + 1];
    for (int i = 0; i <= poli1.degree; ++i)
        for (int j = 0; j <= poli2.degree; ++j)
        {
            RationalFraction productRationalCoef = MUL_QQ_Q(poli1.coef[i], poli2.coef[j]);
            productCoef[i + j] = ADD_QQ_Q(productRationalCoef, productCoef[i + j]);
        }
    poli1.coef = productCoef;
    poli1.degree = productSize;

    return poli1;
}

//Данилеску Игорь 9375 *
Polynom DIV_PP_P(Polynom polynom1, Polynom polynom2)
{
    Polynom prom, result;
    if (polynom1.degree < polynom2.degree)
        return polynom1;
    else
    {
        while (DEG_P_N(polynom1) >= DEG_P_N(polynom2))
        {
            prom = Polynom();
            prom.coef[0] = DIV_QQ_Q(LED_P_Q(polynom1), LED_P_Q(polynom2));
            prom = MUL_Pxk_P(prom, DEG_P_N(polynom1) - DEG_P_N(polynom2));
            result = ADD_PP_P(result, prom);

            polynom1 = SUB_PP_P(polynom1, MUL_PP_P(prom, polynom2));
        }
    }

    return result;
}

//Фатеева Анастасия 9375 *
Polynom MOD_PP_P(Polynom polynom1, Polynom polynom2)
{
    Polynom result;
    result = DIV_PP_P(polynom1, polynom2);
    result = MUL_PP_P(result, polynom2);
    result = SUB_PP_P(polynom1, result);
    return result;
}

//Фатеева Анастасия 9375 *
Polynom GCF_PP_P(Polynom first, Polynom second)
{
    Polynom ost;
    while (DEG_P_N(second) != 0 || NZER_N_B(TRANS_Z_N(second.coef[0].numenator)))
    {
        ost = MOD_PP_P(first, second);
        first = second;
        second = ost;
    }
    return first;
}

//Бухтияров Марат 9375 *
Polynom DER_P_P(Polynom polynom)
{
    Polynom result;
    RationalFraction *coef = new RationalFraction[polynom.degree];

    for (int i = 0; i < polynom.degree; i++)
    {
        if (!(polynom.coef[i].numenator.number.size == 1 &&
              polynom.coef[i].numenator.number.coef[0] == 0))
        {
            coef[i].denominator = polynom.coef[i].denominator;
            coef[i].numenator = MUL_ZZ_Z(polynom.coef[i].numenator, BigInteger(polynom.degree - i));
            coef[i] = RED_Q_Q(coef[i]);
        }
    }

    result = Polynom(coef, polynom.degree - 1);

    delete[] coef;

    return result;
}

//Фатеева Анастасия 9375 *
Polynom NMR_P_P(Polynom polynom)
{
    Polynom result;
    Polynom nod;
    Polynom der = DER_P_P(polynom);

    nod = GCF_PP_P(polynom, der);
    result = DIV_PP_P(polynom, nod);

    result = FAC_P_Q(result);

    return result;
}

/***************************************************************************************************/
bool sortbysec(const std::pair<RationalFraction, int> &a, const std::pair<RationalFraction, int> &b)
{
    return (a.second > b.second);
}

Polynom read_pol(std::string polynom1)
{
    unsigned int i = 0;
    std::vector<std::pair<RationalFraction, int>> mas;
    while (i <= polynom1.length() - 1)
    {
        if (polynom1[i] == '+' || polynom1[i] == '-'||i==0)
        {
            std::string numenator;
            if (polynom1[i] == '-')
                numenator += polynom1[i];
            if(((i==0)&&((polynom1[0]=='-'||polynom1[0]=='+')))||(i!=0))
            i++;

            while (polynom1[i] != '/')
            {
                numenator += polynom1[i];
                i++;
            }
            i++;
            std::string denominator;
            while (polynom1[i] != 'x')
            {
                denominator += polynom1[i];
                i++;
            }
            i += 2;
            int degree = 0;
            std::string str_degree;
            while (polynom1[i] != '+' && polynom1[i] != '-' && i != polynom1.length())
            {
                str_degree += polynom1[i];
                i++;
            }
            degree = QString::fromStdString(str_degree).toInt();
            RationalFraction rational(numenator, denominator);
            mas.push_back(std::make_pair(rational, degree));
        }
    }
    std::sort(mas.begin(), mas.end(), sortbysec);
    RationalFraction *coef = new RationalFraction[mas[0].second + 1];
    for (unsigned i = 0; i < mas.size(); i++)
        coef[mas[0].second - mas[i].second] = mas[i].first;
    Polynom poli(coef, mas[0].second);
    return poli;
}

std::string write_pol(Polynom poli)
{
    std::string str_pol;
    for(int i=0;i<=poli.degree;i++)
    {
        if (!(poli.coef[i].numenator.number.size==1 && poli.coef[i].numenator.number.coef[0]==0))
        {
            if (poli.coef[i].numenator.sign==plus_sign && i!=0)
                str_pol+="+";
            str_pol+=poli.coef[i].numenator.ToString();
            str_pol+="/";
            str_pol+=poli.coef[i].denominator.ToString();
            str_pol+="x^";
            str_pol+=std::to_string(poli.degree-i);
        }
    }
    return str_pol;
}
