#include "header.h"

RationalFraction::RationalFraction()
{
    numenator = BigInteger();
    denominator = BigNatural();
    denominator.coef[0] = 1;
}

RationalFraction &RationalFraction::operator=(RationalFraction const &RacF)
{
    numenator = BigInteger(RacF.numenator);
    denominator = BigNatural(RacF.denominator);
    return *this;
}

RationalFraction::RationalFraction(const RationalFraction &RacF)
{
    numenator = BigInteger(RacF.numenator);
    denominator = BigNatural(RacF.denominator);
}
RationalFraction::RationalFraction(std::string numenator, std::string denominator)
{
    this->numenator = BigInteger(numenator);
    this->denominator = BigNatural(denominator);
}
std::pair<std::string, std::string> RationalFraction::ToString()
{
    return std::make_pair(numenator.ToString(), denominator.ToString());
}

/*********************************************************/
/*MODULES*/

//Герасимов Вадим 9375
RationalFraction RED_Q_Q(RationalFraction number)
{
    RationalFraction result;
    result.numenator = TRANS_N_Z(DIV_NN_N(
        TRANS_Z_N(number.numenator), GCF_NN_N(TRANS_Z_N(number.numenator), number.denominator)));
    result.denominator =
        DIV_NN_N(number.denominator, GCF_NN_N(TRANS_Z_N(number.numenator), number.denominator));
    result.numenator.sign = number.numenator.sign;
    return result;
}

//Кочешков Александр 9375
bool INT_Q_B(RationalFraction number)
{
    number = RED_Q_Q(number);
    if (number.denominator.coef[0] == 1 && number.denominator.size == 1)
        return true;
    else
        return false;
}

//Степанова Мария 9375
/*
Преобразование дробного в целое(если знаменатель равен 1)
Параметры:
1) RationalFraction number - дробное число
Функция возвращает целое число BigInteger
*/
BigInteger TRANS_Q_Z(RationalFraction number)
{
    return number.numenator;
}

//Степанова Мария 9375
/*
Преобразование целого в дробное
Параметры:
1) BigInteger number - целое число
Функция возвращает дробное число RationalFraction
*/
RationalFraction TRANS_Z_Q(BigInteger number)
{
    RationalFraction result;
    result.numenator.sign = number.sign;
    result.numenator.number = TRANS_Z_N(number);
    return result;
}

//Герасимов Вадим 9375
RationalFraction ADD_QQ_Q(RationalFraction first, RationalFraction second)
{
    RationalFraction result;
    BigInteger nok1, nok2;
    nok1 =
        TRANS_N_Z(DIV_NN_N(LCM_NN_N(first.denominator, second.denominator), (first.denominator)));
    nok2 =
        TRANS_N_Z(DIV_NN_N(LCM_NN_N(first.denominator, second.denominator), (second.denominator)));
    result.numenator = ADD_ZZ_Z(MUL_ZZ_Z(nok1, first.numenator), MUL_ZZ_Z(nok2, second.numenator));
    result.denominator = LCM_NN_N(first.denominator, second.denominator);
    result = RED_Q_Q(result);
    return result;
}

//Заречная Юлия 9375
/*
SUB_QQ_Q
Вычитание дробей
Параметры:
1)RationalFraction Fraction1 - уменьшаемая дробь
2)RationalFraction Fraction2 - вычитаемая дробь
Функция возвращает разность дробей - RationalFraction
*/
RationalFraction SUB_QQ_Q(RationalFraction Fraction1, RationalFraction Fraction2)
{
    RationalFraction Fraction3;
    Fraction3.denominator =
        LCM_NN_N(Fraction1.denominator, Fraction2.denominator); //Находим НОК - новый знаменатель
    BigInteger F1_d =
        TRANS_N_Z(DIV_NN_N(Fraction3.denominator,
                           Fraction1.denominator)); //Делим НОК на старый знаменатель ->
    BigInteger F2_d =
        TRANS_N_Z(DIV_NN_N(Fraction3.denominator,
                           Fraction2.denominator)); //-> и переводим из натуральных в целые числа
    Fraction1.numenator = MUL_ZZ_Z(Fraction1.numenator, F1_d);
    Fraction2.numenator = MUL_ZZ_Z(Fraction2.numenator, F2_d);
    Fraction3.numenator = SUB_ZZ_Z(Fraction1.numenator, Fraction2.numenator);
    return Fraction3;
}

//Покровская Елизавета 9375
/*
 Умножение дробей
 Fraction1- первая дробь
 Fraction2- вторая дробь
 Функция возвращает результат умножения двух дробей-дробь RationalFraction
*/
RationalFraction MUL_QQ_Q(RationalFraction Fraction1, RationalFraction Fraction2)
{
    RationalFraction answer;
    answer.numenator =
        MUL_ZZ_Z(Fraction1.numenator,
                 Fraction2.numenator); // умножаем числители двух дробей ( умножение целых)
    answer.denominator =
        MUL_NN_N(Fraction1.denominator,
                 Fraction2.denominator); // умножаем знаменатели двух дробей( умножение натуральных)
    return answer;
}

//Покровская Елизавета 9375
/*
 Деление дробей
 Fraction1- первая дробь
 Fraction2- вторая дробь
 Функция возвращает результат деления двух дробей-дробь RationalFraction
*/
RationalFraction DIV_QQ_Q(RationalFraction Fraction1, RationalFraction Fraction2)
{
    RationalFraction answer;
    BigInteger TRANSNZdenominator2 = TRANS_N_Z(Fraction2.denominator); // преобразуем знаменатель второй дроби из натурального в целый
        answer.numenator = MUL_ZZ_Z(Fraction1.numenator, TRANSNZdenominator2); // умножаем числитель первой дроби на знаменатель второй ( умножение целых)
    BigNatural ABSZNnumerator2 = ABS_Z_N(Fraction2.numenator); // находим модуль числителя второй дроби, то есть преобразуем  его в натуральное
        answer.denominator = MUL_NN_N(Fraction1.denominator, ABSZNnumerator2); // умножаем знаменатель первой дроби на числитель второй( умножение натуральных)
    if (POZ_Z_D(Fraction2.numenator)==2) // если числитель второй дроби оказался положительным, то находим ответ
    {
        return answer;
        }
    else
    {
        answer.numenator=MUL_ZM_Z(answer.numenator); // если нет, умножаем получившийся числитель на (-1)
        return answer;
    }
}
/**********************************************************************************************/
RationalFraction read_frac(std::string rational_str)
{
    unsigned long int i = 0;
    std::string numenator;
    std::string denominator;
    while (rational_str[i] != '/')
    {
        numenator += rational_str[i];
        i++;
    }
    i++;
    while (i < rational_str.size())
    {
        denominator+=rational_str[i];
        i++;
    }
    RationalFraction rational(numenator,denominator);
    return rational;
}

std::string write_frac(RationalFraction rational)
{
    return rational.numenator.ToString()+"/"+rational.denominator.ToString();
}
