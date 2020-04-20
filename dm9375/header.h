#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <vector>

typedef std::vector<std::pair<std::string, std::string>> poly;
// BigNatural
/*******************************************************************/
struct BigNatural
{
    int *coef = nullptr; //адрес массива с коэффициентами
    int size; //номер старшей позиции массива
    BigNatural();
    ~BigNatural();
    BigNatural &operator=(BigNatural const &BigN);
    BigNatural(const BigNatural &BigN);
    BigNatural(int *coef, int size);
    explicit BigNatural(std::string string);
    explicit BigNatural(int number);
    std::string ToString();
};
/*******************************************************************/
enum Sign
{
    plus_sign,
    minus_sign
};
// BigInteger
struct BigInteger
{
    Sign sign; //Знак числа
    BigNatural number; //Число
    BigInteger();
    ~BigInteger() = default;
    BigInteger(const BigInteger &BigInt);
    BigInteger &operator=(BigInteger const &BigInt);
    explicit BigInteger(int number);
    explicit BigInteger(std::string string);
    std::string ToString();
};
/*******************************************************************/
struct RationalFraction //Рациональная дробь
{
    BigInteger numenator; //Числитель
    BigNatural denominator; //Знаменатель

    RationalFraction();
    ~RationalFraction() = default;
    RationalFraction &operator=(RationalFraction const &RacF);
    RationalFraction(const RationalFraction &RacF);
    RationalFraction(std::string numenator, std::string denominator);
    std::pair<std::string, std::string> ToString();
};
/*******************************************************************/
struct Polynom //Многочлен
{
    int degree; //Степень многочлена
    RationalFraction *coef = nullptr; //Массив коэффициентов
    Polynom();
    ~Polynom();
    Polynom(RationalFraction *coef, int degree);
    Polynom(const Polynom &polynom);
    Polynom &operator=(Polynom const &polynom);
    Polynom(poly pol, int degree);
    poly ToString();
};
/*******************************************************************/
/*MODULES*/
/********************************BigNatural*****************************/

//Кузнецова Екатерина 9375
int COM_NN_D(BigNatural a, BigNatural b);

//Шарифуллин Руслан 9375
bool NZER_N_B(BigNatural b);

//Зубцов Михаил 9375
BigNatural ADD_1N_N(BigNatural number);

//Кузнецова Екатерина 9375 *
BigNatural ADD_NN_N(BigNatural first, BigNatural second);

//Кузнецова Екатерина 9375 *
BigNatural SUB_NN_N(BigNatural first, BigNatural second);

//Зубцов Михаил 9375
BigNatural MUL_ND_N(BigNatural number, int factor);

//Зубцов Михаил 9375
BigNatural MUL_Nk_N(BigNatural number, int tenDegree);

//Гладилин Сергей 9375
BigNatural MUL_NN_N(BigNatural first, BigNatural second);

//Хаит Даниил 9375
BigNatural SUB_NDN_N(BigNatural first, BigNatural second, int factor);

//Хаит Даниил 9375
int DIV_NN_Dk(BigNatural first, BigNatural second, int tenDegree);

//Кочешков Александр 9375 *
BigNatural DIV_NN_N(BigNatural first, BigNatural second);

//Коновалова Алина 9375 *
BigNatural MOD_NN_N(BigNatural first, BigNatural second);

//Коновалова Алина 9375 *
BigNatural GCF_NN_N(BigNatural first, BigNatural second);

//Коновалова Алина 9375 *
BigNatural LCM_NN_N(BigNatural first, BigNatural second);

/*************************BigInteger********************************/

//Барашкин Дмитрий 9375
BigNatural ABS_Z_N(BigInteger biIn);

//Барашкин Дмитрий 9375
int POZ_Z_D(BigInteger biIn);

//Барашкин Дмитрий 9375
BigInteger MUL_ZM_Z(BigInteger biIn);

//Шарифуллин Руслан 9375
BigInteger TRANS_N_Z(BigNatural b);

//Шарифуллин Руслан 9375
BigNatural TRANS_Z_N(BigInteger b);

//Гладилин Сергей 9375
BigInteger ADD_ZZ_Z(BigInteger first, BigInteger second);

//Гладилин Сергей 9375
BigInteger SUB_ZZ_Z(BigInteger first, BigInteger second);

//Покровская Елизавета 9375
BigInteger MUL_ZZ_Z(BigInteger firstInt, BigInteger secondInt);

//Шагиев Даниил 9375 *
BigInteger DIV_ZZ_Z(BigInteger first, BigInteger second);

/*************************RationalFraction********************************/

//Герасимов Вадим 9375 *
RationalFraction RED_Q_Q(RationalFraction number);

//Кочешков Александр 9375 *
bool INT_Q_B(RationalFraction number);

//Степанова Мария 9375*
BigInteger TRANS_Q_Z(RationalFraction number);

//Степанова Мария 9375 *
RationalFraction TRANS_Z_Q(BigInteger number);

//Герасимов Вадим 9375 *
RationalFraction ADD_QQ_Q(RationalFraction first, RationalFraction second);

//Заречная Юлия 9375
RationalFraction SUB_QQ_Q(RationalFraction Fraction1, RationalFraction Fraction2);

//Покровская Елизавета 9375
RationalFraction MUL_QQ_Q(RationalFraction Fraction1, RationalFraction Fraction2);

//Покровская Елизавета 9375*
RationalFraction DIV_QQ_Q(RationalFraction first, RationalFraction second);

/*************************Polynom********************************/

//Герасимов Вадим 9375 *
Polynom ADD_PP_P(Polynom first, Polynom second);

//Герасимов Вадим 9375 *
Polynom SUB_PP_P(Polynom first, Polynom second);

//Данилеску Игорь 9375
Polynom MUL_PQ_P(Polynom poli, RationalFraction frank);

//Бухтияров Марат 9375
Polynom MUL_Pxk_P(Polynom inputValue, int changeDegree);

//Степанова Мария 9375 *
RationalFraction LED_P_Q(Polynom polynom);

//Бухтияров Марат 9375
int DEG_P_N(Polynom inputValue);

//Заречная Юлия 9375 *
Polynom FAC_P_Q(Polynom polynom);

//Данилеску Игорь 9375
Polynom MUL_PP_P (Polynom poli1, Polynom poli2);

//Данилеску Игорь 9375 *
Polynom DIV_PP_P(Polynom polynom1, Polynom polynom2);

//Фатеева Анастасия 9375 *
Polynom MOD_PP_P(Polynom polynom1, Polynom polynom2);

//Фатеева Анастасия 9375 *
Polynom GCF_PP_P(Polynom first, Polynom second);

//Бухтияров Марат 9375 *
Polynom DER_P_P(Polynom polynom);

//Фатеева Анастасия 9375 *
Polynom NMR_P_P(Polynom polynom);

#endif // HEADER_H
