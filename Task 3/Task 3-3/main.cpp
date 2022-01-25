#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/*
* \param x текущее значение числа
*/
double GetFunction(const double x);

/*
* \brief
* \param x текущее значение числа
* \param limit точность
* \return
*/
double GetSum(const double x, const double limit);

/*
* \brief
* \param x текущее значение числа
* \param n текущий член ряда
* \return
*/
double GetRecurrent(const double x, const int n);

/*
* \brief
* \param x текущее значение числа
* \param n текущий член ряда
* \param two заданная в типе size_t 2
* \return
*/
double GetPartSum(const double x, const int n);

/*
* \brief точка входа в программу
* \return 0 случае успеха
*/
int main()
{
	auto x = 0.1;//задано как минимальное значение
	const auto epsilon = pow(10, -4);// Точность
	const auto h = 0.01;// Заданный шаг
	const auto max = 1.0;// Максимальное значение x

	while (x < max)
	{
		cout << "x = " << x << ' ' << GetFunction(x) << ' ' << GetSum(x, epsilon) << "\n";
		x += h;
	}

	return 0;
}

double GetFunction(const double x)
{
	return (exp(x) + exp(-x)) / 2;
}

double GetSum(const double x, const double limit)
{
	auto previous = 0;
	auto current = 1.0;
	double sum = current;
	unsigned int n = 1;
	double recurrent;

	do
	{
		recurrent = GetRecurrent(x, n + 1);
		sum += recurrent * GetPartSum(x, n);
		n++;
	} while (GetPartSum(x, n) >= limit);

	return sum;
}

double GetRecurrent(const double x, const int n)
{
	return GetPartSum(x, n) / GetPartSum(x, n - 1);
}

double GetPartSum(const double x, const int n)
{
	const double two = 2;
	return (pow(x, two * n)) / (two * n);
}