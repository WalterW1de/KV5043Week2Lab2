#include <iostream>

int main()
{
	char name[5];
	std::cout << "Enter your name: ";
	std::cin.getline(name, 20);
	std::cout << "Hello, " << name << "!" << std::endl;

		return 0;
}