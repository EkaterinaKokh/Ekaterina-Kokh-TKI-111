#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

//using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \return значение функции
 */
double getA(const double x, const double y, const double z);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return 0  значение функции
 */
double getB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const auto x = 0.2;
    const auto y = 0.004;
    const auto z = 1.1;

    const auto a = getA(x, y, z);
    const auto b = getB(x, y, z);


    std::cout << std::setprecision(9) << "x = " << x << " y = " << y << " z = " << z
        << " a = " << a << " b = " << b << std::endl;
    return 0;
}



double getA(const double x, const double y, const double z)
{
    return pow(sin(((x*x)+z)*((x*x)+z)*((x*x)+z)),3) - sqrt(x / y);
}

double getB(const double x, const double y, const double z)
{
    return ((x * x) / z) + cos((x + y) * (x + y) * (x + y));
}