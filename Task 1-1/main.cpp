#define _USE_MATH_DEFINES //for C++


#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief Расчёт значения a
* \param x Значение x
* \param y Значение y
* \param z Значение z
* \return Значение a
*/
double getA(double x, double y, double z)
{
	return pow(sin(pow(x * x + z, 2), 3)) - sqrt(x / y);
}
/**
* \brief Расчёт значения a
* \param x Значение x
* \param y Значение y
* \param z Значение z
* \return Значение a
*/
double getB(double x, double y, double z)
{
	return (x * x) / z + cos(pow(x + y, 3));
}

int main()
{
	const auto x = 0.2;
	const auto y = 0.004;
	const auto z = 1.1;


	const auto a = getA(x, y, z);
	const auto b = getB(x, y, z);

	cout << "x=" << x << " y=" << "z=" << z << "\n";
	cout << "a=" << a << ", b=" << b;

	return 0;
}