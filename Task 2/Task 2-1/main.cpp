#include <iostream>

using namespace std;

/**
 * \brief Пользовательский выбор вывода или месяца (0),
 * или дня недели (1)
 */
enum class mainChoice { month, day };

/**
 * \brief Пользовательский выбор вывода названия месяца (значения от 1 до 12)
 */
enum class month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

/**
 * \brief Пользовательский выбор вывода названия дня недели (значения от 1 до 7)
 */
enum class days { Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun };

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
	cout << "output: month (0) or day of the week (1)" << "\n";
	int choice1;
	cin >> choice1; // ввод первого выбора - показать месяц или день недели

	const auto choice = static_cast<mainChoice>(choice1);
	switch (choice)
	{
	case mainChoice::month:
	{
		cout << "number of month" << "\n";
		int months;
		cin >> months;

		const auto monthChoice = static_cast<month>(months); // в зависимости от введённого числа от 1 до 12 будет показан какой это месяц

		switch (monthChoice)
		{
		case month::Jan:
		{
			cout << "January";
			break;
		}
		case month::Feb:
		{
			cout << "February";
			break;
		}
		case month::Mar:
		{
			cout << "March";
			break;
		}
		case month::Apr:
		{
			cout << "April";
			break;
		}
		case month::May:
		{
			cout << "May";
			break;
		}
		case month::Jun:
		{
			cout << "June";
			break;
		}
		case month::Jul:
		{
			cout << "July";
			break;
		}
		case month::Aug:
		{
			cout << "August";
			break;
		}
		case month::Sep:
		{
			cout << "September";
			break;
		}
		case month::Oct:
		{
			cout << "October";
			break;
		}
		case month::Nov:
		{
			cout << "November";
			break;
		}
		case month::Dec:
		{
			cout << "December";
			break;
		}
		}
		break;
	}
	case mainChoice::day:
	{
		cout << "number of day" << "\n";
		int day;
		cin >> day;

		const auto dayChoice = static_cast<days>(day); // в зависимости от введённого номера дня недели от 1 до 7 будет показано название дня недели

		switch (dayChoice)
		{
		case days::Mon:
		{
			cout << "Monday";
			break;
		}
		case days::Tue:
		{
			cout << "Tuesday";
			break;
		}
		case days::Wed:
		{
			cout << "Wednesday";
			break;
		}
		case days::Thu:
		{
			cout << "Thursday";
			break;
		}
		case days::Fri:
		{
			cout << "Friday";
			break;
		}
		case days::Sat:
		{
			cout << "Saturday";
			break;
		}
		case days::Sun:
		{
			cout << "Sunday";
			break;
		}
		}
		break;
	}
	}
	cout << endl;
	return 0;
}