#include <iostream>

int main()
{
	char name[20];
	std::cout << "Enter your name: ";
	std::cin.getline(name, 20);
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Input error:" << std::endl;
		std::cin.getline(name, 20);
	}
	std::cout << "Hello, " << name << "!" << std::endl;

		return 0;
}