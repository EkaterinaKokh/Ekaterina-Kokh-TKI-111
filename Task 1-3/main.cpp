#define _USE_MATH_DEFINES 

#include <iostream>
#include <cmath>

using namespace std;

/*
* \brief Ќаходит путь, пройденный автомобилем
* \param power «начение силы т¤ги
* \param work «начение совершенной работы
* \return ѕуть, пройденный автомобилем
*/
double getDistance(double power, double work);

/*
* \brief ѕереводит в 6 степень
* \param work «начение работы
* \return –абота в мегаджоул¤х
*/
double getToMega(double work);

/*
* \brief ѕереводит в 3 степень
* \param power «начение силы
* \return —ила в килоньютонах
*/
double getToKilo(double power);

/*
* \brief ¬ход в программу
* return в случае успеха возвращает 0
*/

int main()
{
	double power, work;
	cout << "The value of power: "; cin >> power;
	cout << "The value of work: "; cin >> work;

	const double workToMega = getToMega(work);
	const double powerToKilo = getToKilo(power);
	const double distance = getDistance(powerToKilo, workToMega);

	cout << "Distance: " << distance;

	return 0;
}

double getDistance(double powerToKilo, double workToMega)
{
	return workToMega / powerToKilo; //ѕо формуле из курса физики путь равен делению значени¤ работы на значение силы т¤ги
}

double getToMega(double work)
{
	return work * pow(10, 6); //ѕеревод работы из ћегаджоулей в джоули
}

double getToKilo(double power)
{
	return power * pow(10, 3); //ѕеревод силы из килоньютонов в ньютоны
}