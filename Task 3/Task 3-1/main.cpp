#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


/**
 * \brief Возможность расчета функции в точке.
 * \param x Входной параметр - точка x.
 * \return true, если функция определена в заданной точке x.
 */
bool IsCalculated(const double x);

/**
*\brief Проверка аргумента.
* \param x Входной параметр - точка x.
* \return true, если аргумент входит в одз.
*/
bool IsRight(const double x);


/**
 * \brief Расчет функции в точке x.
 * \param x Входной параметр - точка x.
 * \return Значение функции в точке x
 */
double Function(const double x);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
    const auto left = 0.0;
    const auto right = 0.8; // Границы промежутка
    const auto step = 0.05; //Шаг функции

    auto x = left;
    cout << "  x" << setw(15) << "y\n";
    while ((x < right) || (abs(x - right) < step))
    {
        if (IsCalculated(x) && IsRight(x))
        {
            const auto y = Function(x);
            cout << setw(10) << setprecision(2) << x << setw(15)
                << setprecision(5) << y << '\n';
        }
        else
        {
            cout << setw(10) << setprecision(2) << x << setw(15)
                << "error \n";
        }
        x += step;
    }
    return 0;
}

double Function(const double x)
{
    return tan(x) - (pow(tan(x), 3) / 3.0) + (pow(tan(x), 5) / 5.0) - (1.0 / 3.0); // Расчёт функции
}

bool IsCalculated(const double x)
{
    return x >= std::numeric_limits<double>::min();
} // Проверка, больше ли число минимума типа double, если да - функция работает

bool IsRight(const double x)
{
    bool check = false;
    if (x != M_PI / 2) check = true;
    return check;
}