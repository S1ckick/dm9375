#ifndef GLOBALNUMBERS_H
#define GLOBALNUMBERS_H
#include <QString>

class globalNumbers
{
  public:
    explicit globalNumbers();
    ~globalNumbers();
    void set_bignatural(const QString &bignatural);
    QString get_bignatural();
    void set_biginteger(const QString &biginteger);
    QString get_biginteger();
    void set_rational(const QString &rat);
    QString get_rational();

  private:
    QString bign;
    QString bigi;
    QString rational;
};
extern globalNumbers globalNumber;
#endif // GLOBALNUMBERS_H
