#include "globalnumbers.h"

globalNumbers::globalNumbers()
{
}

globalNumbers::~globalNumbers()
{
}

void globalNumbers::set_bignatural(const QString &bignatural)
{
    globalNumbers::bign = bignatural;
}

QString globalNumbers::get_bignatural()
{
    return globalNumbers::bign;
}

void globalNumbers::set_biginteger(const QString &biginteger)
{
    globalNumbers::bigi = biginteger;
}

QString globalNumbers::get_biginteger()
{
    return globalNumbers::bigi;
}
void globalNumbers::set_rational(const QString &rat)
{
    globalNumbers::rational = rat;
}

QString globalNumbers::get_rational()
{
    return globalNumbers::rational;
}
void globalNumbers::set_polynom(const QString &pol)
{
    globalNumbers::polynom = pol;
}

QString globalNumbers::get_polynom()
{
    return globalNumbers::polynom;
}
globalNumbers globalNumber;
