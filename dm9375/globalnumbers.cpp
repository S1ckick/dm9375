#include "globalnumbers.h"

globalNumbers::globalNumbers()
{

}

globalNumbers::~globalNumbers()
{

}

void globalNumbers::set_bignatural(const QString &bignatural)
{
    globalNumbers::bign=bignatural;
}

QString globalNumbers::get_bignatural()
{
    return globalNumbers::bign;
}

void globalNumbers::set_biginteger(const QString &biginteger)
{
    globalNumbers::bigi=biginteger;
}

QString globalNumbers::get_biginteger()
{
    return globalNumbers::bigi;
}
globalNumbers globalNumber;
