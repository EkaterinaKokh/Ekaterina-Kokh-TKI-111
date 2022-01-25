#define _USE_MATH_DEFINES //for C++
#define  M_PI

#include <iostream>
#include <cmath>

using namespace std;

/*
*\ brief Находит третью сторону треугольника
*\ param firstSide Длина первой стороны треугольника
*\ param sekondSide Длина второй стороны треугольника
*\ param rad Угол между этими сторонами
*\ return Длина третьей стороны треугольника
*/
double getThirdSideTriangle(double firstSide, double sekondSide, double rad);

/*
* \brief Находит площадь треугольника
* \param firstSide Длина первой стороны треугольника
* \param sekondSide Длина второй стороны треугольника
* \param  rad Угол между этими сторонами
* \rerurn Площадь треугольника
*/
double getAreaTriangle(double firstSide, double sekondSide, double rad);

/*
* \brief Находит радиус описанной окружности 
* \param firstSide Длина первой стороны треугольника
* \param sekondSide Длина второй стороны треугольника
* \param thirdSide Длина третьей стороны треугольника
* \param area Площадь треугольника
* \return Площадь треугольника
*/
double getRadiusCircumscribedCircle(double thirdside, double rad);

/*
* \brief Переводит градусы в радианы
* \param angle Градусная мера угла
* \return Угол в радианах
*/
double getToRadians(double angle);
 
/*
* \brief Вход в программу
* \return в случае успеха возвращает 0
*/

int main()
{
	double firstSide, sekondSide, angle;
	cout << "Length first side: "; cin >> firstSide;
	cout << "Length sekond side: "; cin >> sekondSide;
	cout << "Angle between the sides: "; cin >> angle;

	const double rad = getToRadians(angle);
	const double thirdSide = getThirdSideTriangle(firstSide, sekondSide, rad);
	const double area = getAreaTriangle(firstSide, sekondSide, rad);
	const double radius = getRadiusCircumscribedCircle(thirdSide, rad);

	cout << "Length of the third side: " << thirdSide << ", Area of the triangle: " << area << ", Radius of the circumscribed circle: " << radius;

	return 0;
}

double getThirdSideTriangle(double firstSide, double sekondSide, double rad)
{
	return sqrt(pow(firstSide, 2) + pow(sekondSide, 2) - 2 * firstSide * sekondSide * cos(rad)); //Третью сторону треугольника находим по теореме косинусов
}

double getAreaTriangle(double firstSide, double sekondSide, double rad)
{
	return firstSide * sekondSide * sin(rad) / 2; //Площадь находим с помощью полупроизведения двух сторон на синус угла между ними
}

double getRadiusCircumscribedCircle(double thirdSide, double rad)
{
	return thirdSide / (2 * sin(rad)); //Радиус описанной окружности находится из теоремы синусов
}

double getToRadians(double angle)
{
	return angle * M_PI / 180; //Переводит градусы в радианы для расчета тригонометрических функций
}