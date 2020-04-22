#include "header.h"

BigInteger::BigInteger()
{
    sign = plus_sign;
    number = BigNatural();
}

BigInteger::~BigInteger()
{
}

BigInteger &BigInteger::operator=(BigInteger const &BigInt)
{
    sign = BigInt.sign;
    number = BigNatural(BigInt.number);
    return *this;
}

BigInteger::BigInteger(int number)
{
    if (number < 0)
    {
        number = -number;
        sign = minus_sign;
    }
    else
        sign = plus_sign;
    this->number = BigNatural(number);
}

BigInteger::BigInteger(const BigInteger &BigInt)
{
    sign = BigInt.sign;
    number = BigNatural(BigInt.number);
}

BigInteger::BigInteger(std::string string)
{
    if (string[0] == '-')
    {
        sign = minus_sign;
        number = BigNatural(string.erase(0, 1));
    }
    else
    {
        sign = plus_sign;
        number = BigNatural(string);
    }
}
std::string BigInteger::ToString()
{
    if (sign == minus_sign)
    {
        std::string strBigN;
        strBigN += '-';
        strBigN += number.ToString();
        return strBigN;
    }
    else
        return number.ToString();
}
/*********************************************************/
/*MODULES*/

//Барашкин Дмитрий 9375
BigNatural ABS_Z_N(BigInteger biIn)
{
    BigInteger res = BigInteger(biIn);
    return res.number;
}

//Барашкин Дмитрий 9375
int POZ_Z_D(BigInteger biIn)
{
    if (biIn.number.coef[0] == 0 && biIn.number.size == 1)
    {
        return 0;
    }
    else if (biIn.sign == Sign::minus_sign)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

//Барашкин Дмитрий 9375
BigInteger MUL_ZM_Z(BigInteger biIn)
{
    BigInteger res = BigInteger(biIn);
    if (res.number.coef[0] == 0 && res.number.size == 1)
    {
        return res;
    }
    else if (res.sign == plus_sign)
    {
        res.sign = minus_sign;
        return res;
    }
    else if (res.sign == minus_sign)
    {
        res.sign = plus_sign;
        return res;
    }
    return res;
}

//Шарифуллин Руслан 9375
BigInteger TRANS_N_Z(BigNatural b)
{
    BigInteger bigInt;
    bigInt.number = b;
    bigInt.sign = plus_sign;
    return bigInt;
}

//Шарифуллин Руслан 9375
BigNatural TRANS_Z_N(BigInteger b)
{
    BigNatural bigNat;
    bigNat = b.number;
    return bigNat;
}

//Гладилин Сергей 9375
BigInteger ADD_ZZ_Z(BigInteger first, BigInteger second)
{
    BigInteger result;
    result.sign = first.sign;
    if (first.sign == second.sign)
    {
        result.number = ADD_NN_N(ABS_Z_N(first), ABS_Z_N(second));
        return result;
    }
    if(first.sign == minus_sign)
    {
        BigInteger tmp(second);
        second = first;
        first = tmp;
        result.sign = plus_sign;
    }
        if (COM_NN_D(ABS_Z_N(first), ABS_Z_N(second)) == 2)
        {
            result.number = SUB_NN_N(ABS_Z_N(first), ABS_Z_N(second));
            return result;
        }
        else
        {
            result.number = SUB_NN_N(ABS_Z_N(second), ABS_Z_N(first));
            if (!NZER_N_B(result.number))
            {
                result.sign = plus_sign;
                return result;
            }
            else
            {
                result.sign = minus_sign;
                return result;
            }
        }
}

//Гладилин Сергей 9375
BigInteger SUB_ZZ_Z(BigInteger first, BigInteger second)
{
    BigInteger result;
    result.sign = first.sign;
    if (first.sign == second.sign)
    {
        if (COM_NN_D(ABS_Z_N(first), ABS_Z_N(second)) == 2)
            result.number = SUB_NN_N(ABS_Z_N(first), ABS_Z_N(second));
        else
        {
            result.number = SUB_NN_N(ABS_Z_N(second), ABS_Z_N(first));
            if (COM_NN_D(ABS_Z_N(first), ABS_Z_N(second)) == 0)
                result.sign = plus_sign;
            else
                result = MUL_ZM_Z(result);
        }
    }
    else
        result.number = ADD_NN_N(ABS_Z_N(first), ABS_Z_N(second));

    return result;
}

//Покровская Елизавета 9375
BigInteger MUL_ZZ_Z(BigInteger firstInt, BigInteger secondInt)
{
    BigInteger answer;
    BigNatural absFirstInt;
    BigNatural absSecondInt;
    absFirstInt =
        ABS_Z_N(firstInt); // находим модули чисел, то есть делаем целые числа натуральными
    absSecondInt = ABS_Z_N(secondInt);
    answer.number = MUL_NN_N(absFirstInt, absSecondInt); // перемножаем натуральные числа
    if (POZ_Z_D(firstInt) == POZ_Z_D(secondInt))
        return answer; // если оба числа положительные или отрицательные, то находим ответ
    else
        return MUL_ZM_Z(answer); // если нет, то умножаем на (-1)
}

//Шагиев Даниил 9375 *
BigInteger DIV_ZZ_Z(BigInteger first, BigInteger second)
{
    BigInteger res;
    if (second.number.coef[0] != 0 || second.number.size != 1)
    {
        res.number = DIV_NN_N(ABS_Z_N(first), ABS_Z_N(second));
        res.sign = first.sign == second.sign ? plus_sign : minus_sign;
        if (POZ_Z_D(first) == 1)
            res.number = ADD_1N_N(res.number);
    }
    else
        res.number.size = 0;
    return res;
}

//Шагиев Даниил 9375 *
BigInteger MOD_ZZ_Z(BigInteger first, BigInteger second)
{
    return SUB_ZZ_Z(first, MUL_ZZ_Z(second, DIV_ZZ_Z(first, second)));
}
