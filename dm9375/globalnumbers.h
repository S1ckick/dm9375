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

private:
    QString bign;

};
extern globalNumbers globalNumber;
#endif // GLOBALNUMBERS_H
