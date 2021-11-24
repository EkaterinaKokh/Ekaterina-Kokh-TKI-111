#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \return значение функции
 */
double paramA(const double x, const double y, const double z);

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return 0  значение функции
 */
double paramB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const auto x = 0.2;
    const auto y = 0.004;
    const auto z = 1.1; // параметры x,y,z

    const auto a = paramA(x, y, z); // расчёт параметра а
    const auto b = paramB(x, y, z); // расчёт параметра b

    cout << " a = " << a << " b = " << b << endl;
    return 0;
}

double paramA(const double x, const double y, const double z)
{
    return pow(sin(((x * x) + z) * ((x * x) + z) * ((x * x) + z)), 3) - sqrt(x / y);
}

double paramB(const double x, const double y, const double z)
{
    return ((x * x) / z) + cos((x + y) * (x + y) * (x + y));
}