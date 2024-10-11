#include <iostream>

int main()
{
	int age;
	int day, month, year;

	std::cout << "Enter your age in years: ";
	std::cin >> age;

	std::cout << "Enter your birthdate (day, month, year): ";
	std::cin >> day >> month >> year; 

	std::cout << "You are: " << age << " years old." << std::endl;
	std::cout << "You were born on " << day << "/" << month << "/" << year << std::endl;

		return 0;
}