#include "header.h"
BigNatural::BigNatural()
{
    size = 1;
    coef = new int[1];
    coef[0] = 0;
}

BigNatural::~BigNatural()
{
    delete[] coef;
}

//Получаем на вход массив коэффициентов и его размер
BigNatural::BigNatural(int *coef, int size)
{
    this->size = size;
    this->coef = new int[size];
    memcpy(this->coef, coef, size * sizeof(int));
}

//Операция присваивания
BigNatural &BigNatural::operator=(BigNatural const &BigN)
{
    delete[] coef;
    size = BigN.size;
    coef = new int[size];
    memcpy(coef, BigN.coef, size * sizeof(int));
    return *this;
}

BigNatural::BigNatural(const BigNatural &BigN)
{
    size = BigN.size;
    delete[] coef;
    coef = new int[size];
    memcpy(coef, BigN.coef, size * sizeof(int));
}

BigNatural::BigNatural(int number)
{
    int *tmpCoef = nullptr;
    size = 0;
    while (number != 0)
    {
        tmpCoef = (int *)realloc(tmpCoef, (size + 1) * sizeof(int));
        tmpCoef[size] = number % 10;
        number /= 10;
        size++;
    }
    coef = new int[size];
    memcpy(coef, tmpCoef, size * sizeof(int));
    free(tmpCoef);
}

BigNatural::BigNatural(std::string string)
{
    size = string.length();
    coef = new int[size];
    for (int i = size; i > 0; i--)
    {
        coef[i - 1] = string[abs(size - i)] - '0';
    }
}

std::string BigNatural::ToString()
{
    std::string str;
    for (int i = size; i > 0; i--)
    {
        str += std::to_string(coef[i - 1]);
    }
    return str;
}
/*********************************************************/
/*MODULES*/

//Кузнецова Екатерина 9375
int COM_NN_D(BigNatural a, BigNatural b)
{
    if (a.size > b.size)
    {
        return 2;
    }
    else
    {
        if (b.size > a.size)
        {
            return 1;
        }
        else
        {
            for (int i = a.size - 1; i >= 0; --i)
            {
                if (a.coef[i] > b.coef[i])
                {
                    return 2;
                }
                else if (b.coef[i] > a.coef[i])
                {
                    return 1;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    return 0;
}

//Шарифуллин Руслан 9375
//На вход функция получает число, выводи “false”, если число является 0, иначе “true”.
bool NZER_N_B(BigNatural b)
{
    if ((b.size == 1) && (b.coef[0] == 0))
    {
        return false;
    }
    else
    {
        return true;
    }
}

//Зубцов Михаил 9375
BigNatural ADD_1N_N(BigNatural number)
{
    int counter = 0;
    BigNatural result;
    result = number;
    if (result.coef[0] != 9)
        result.coef[0]++;
    else
    {
        while (counter != result.size && result.coef[counter] == 9)
        {
            result.coef[counter] = 0;
            counter++;
        }
        if (counter == result.size)
        {
            int *newResult = new int[result.size + 1];
            memcpy(newResult, result.coef, result.size * sizeof(int));
            result.size++;
            result.coef = newResult;
            result.coef[result.size - 1] = 1;
        }
        else
        {
            result.coef[counter]++;
        }
    }
    return result;
}

//Кузнецова Екатерина 9375
//Сложение натуральных чисел
BigNatural ADD_NN_N(BigNatural first, BigNatural second)
{
    BigNatural result;
    int i;
    int tmp = 0;

    if (COM_NN_D(first, second) == 1)
        return ADD_NN_N(second, first);

    int *resCoef = new int[first.size];

    for (i = 0; i < second.size; i++)
    {
        resCoef[i] = (first.coef[i] + second.coef[i] + tmp) % 10;
        tmp = (first.coef[i] + second.coef[i] + tmp) / 10;
    }

    for (i = second.size; i < first.size; i++)
    {
        resCoef[i] = (first.coef[i] + tmp) % 10;
        tmp = (first.coef[i] + tmp) / 10;
    }

    if (tmp)
    {
        int *newResult = new int[result.size + 1];
        memcpy(newResult, resCoef, first.size * sizeof(int));
        result.size = first.size + 1;
        newResult[first.size] = tmp;
        result = BigNatural(newResult, result.size);
        delete[] resCoef;
        delete[] newResult;
        return result;
    }
    else
        result.size = first.size;

    result = BigNatural(resCoef, result.size);

    delete[] resCoef;
    return result;
}

//Кузнецова Екатерина 9375
BigNatural SUB_NN_N(BigNatural first, BigNatural second)
{
    if (COM_NN_D(first, second) == 1)
        return SUB_NN_N(second, first);
    BigNatural result;
    int i;
    int temp;
    int carry = 0;

    int *a = first.coef;

    int *b = second.coef;

    int *resCoef = new int[first.size];

    for (int i = 0; i < second.size; i++)
    {
        temp = a[i] - b[i] + carry;
        if (temp < 0)
        {
            resCoef[i] = temp + 10;
            carry = -1;
        }
        else
        {
            resCoef[i] = temp;
            carry = 0;
        }
    }

    for (i = second.size; i < first.size; i++)
    {
        temp = a[i] + carry;
        if (temp < 0)
        {
            resCoef[i] = temp + 10;
            carry = -1;
        }
        else
        {
            resCoef[i] = temp;
            carry = 0;
        }
    }

    i = first.size - 1;
    while ((i > 0) && (resCoef[i] == 0))
        i--;
    int *newResult = new int[first.size + 1];
    memcpy(newResult, resCoef, first.size * sizeof(int));
    result = BigNatural(newResult, i + 1);

    delete[] resCoef;
    delete[] newResult;
    return result;
}

//Зубцов Михаил 9375
BigNatural MUL_ND_N(BigNatural number, int factor)
{
    BigNatural result;
    int tmp = 0;
    if (factor == 0)
        return BigNatural();
    int *resArray = new int[number.size];
    for (int j = 0; j < number.size; j++)
    {
        resArray[j] = (number.coef[j] * factor + tmp) % 10;
        tmp = (number.coef[j] * factor + tmp) / 10;
    }
    result.size = number.size;
    if (tmp)
    {
        int *newArray = new int[number.size + 1];
        memcpy(newArray, resArray, number.size * sizeof(int));
        newArray[result.size] = tmp;
        result.size++;
        result = BigNatural(newArray, result.size);
        delete[] newArray;
        delete[] resArray;
        return result;
    }
    else
    {
        result = BigNatural(resArray, result.size);
        delete[] resArray;
        return result;
    }
}

//Зубцов Михаил 9375
BigNatural MUL_Nk_N(BigNatural number, int tenDegree)
{
    BigNatural result;
    int size = number.size + tenDegree;
    if (!NZER_N_B(number))
        return BigNatural();
    int *resArray = new int[size];
    for (int i = 0; i < tenDegree; i++)
        resArray[i] = 0;
    for (int i = tenDegree; i < size; i++)
        resArray[i] = number.coef[i - tenDegree];
    result = BigNatural(resArray, size);
    delete[] resArray;
    return result;
}

//Гладилин Сергей 9375
BigNatural MUL_NN_N(BigNatural first, BigNatural second)
{
    BigNatural result;

    if (COM_NN_D(first, second) == 1)
        return MUL_NN_N(second, first);

    for (int i = 0; i < second.size; i++)
        result = ADD_NN_N(result, MUL_Nk_N(MUL_ND_N(first, second.coef[i]), i));

    return result;
}

//Хаит Даниил 9375
/*
Назначение: Вычитание из натурального другого натурального,
умноженного на цифру для случая с неотрицательным результатом
*/
BigNatural SUB_NDN_N(BigNatural first, BigNatural second, int factor)
{
    if (COM_NN_D(first, second) == 1)
        return first;
    else
        return (SUB_NN_N(first, MUL_ND_N(second, factor)));
}

//Хаит Даниил 9375
/*
Назначение: Вычисление первой цифры деления большего натурального на меньшее,
домноженное на 10^k,где k - номер позиции этой цифры (номер считается с нуля)
*/
int DIV_NN_Dk(BigNatural first, BigNatural second, int tenDegree)
{
    int i = 0;
    second = MUL_Nk_N(second, tenDegree);
    if (COM_NN_D(first, second) == 1)
        return 0;
    if (COM_NN_D(first, second) == 0)
        return 1;
    do
    {
        first = SUB_NN_N(first, second);
        i++;
    } while (COM_NN_D(first, second) != 1);
    return i;
}

//Кочешков Александр 9375
/*
DIV_NN_N
Частное от деления большего натурального числа на меньшее или равное натуральное с остатком(делитель отличен от нуля)
Параметры :
1) BigNatural first - числитель.
2) BigNatural second - знаменатель.
Функция возвращает частное от деления BigNatural.
*/
BigNatural DIV_NN_N(BigNatural first, BigNatural second)
{

    if (COM_NN_D(first, second) == 0)
return BigNatural(1);

    if (COM_NN_D(first, second) == 1)
return BigNatural();

    if (NZER_N_B(second) == 0)
return BigNatural();

    BigNatural result;
int tenDegree = first.size;

    for (;tenDegree >= 0;tenDegree--)
{
while ((COM_NN_D(first, MUL_Nk_N(second, tenDegree)) == 1) && (tenDegree > 0))
{
tenDegree--;
}

        int divisorNumber = DIV_NN_Dk(first, second, tenDegree);

        result = ADD_NN_N(MUL_Nk_N(BigNatural(divisorNumber), tenDegree), result);

        first = SUB_NN_N(first, MUL_Nk_N(MUL_ND_N(second, divisorNumber), tenDegree));
}
return result;
}

//Коновалова Алина 9375
/*MOD_NN_N
Возвращает остаток от деления большего натурального числа на меньшее
или равное натуральное с остатком(делитель отличен от нуля)
Параметры:
1. BigNatural first - первое натуральное число
2. BigNatural second - второе натуральное число
Функция возвращает остаток от деления - BigNatural
*/
BigNatural MOD_NN_N(BigNatural first, BigNatural second)
{
    BigNatural res;

    if (COM_NN_D(first, second) == 1)
        return first;
    else
    {
        res = SUB_NN_N(first, (MUL_NN_N((DIV_NN_N(first, second)), second)));
        return res;
    }
}

//Коновалова Алина 9375
/*GCF_NN_N
Возвращает НОД натуральных чисел
Параметры:
1. BigNatural first - первое натуральное число
2. BigNatural second - второе натуральное число
Функция возвращает НОД - BigNatural
*/
BigNatural GCF_NN_N(BigNatural first, BigNatural second)
{
    BigNatural ost;
    while (NZER_N_B(second))
    {
        ost = MOD_NN_N(first, second);
        first = second;
        second = ost;
    }
    return first;
}

//Коновалова Алина 9375
/*LCM_NN_N
Возвращает НОК натуральных чисел
Параметры:
1. BigNatural first - первое натуральное число
2. BigNatural second - второе натуральное число
Функция возвращает НОК - BigNatural
*/
BigNatural LCM_NN_N(BigNatural first, BigNatural second)
{
    BigNatural res;
    res = DIV_NN_N((MUL_NN_N(first, second)),(GCF_NN_N(first, second)));
    return res;
}
