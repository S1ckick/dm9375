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

globalNumbers globalNumber;
