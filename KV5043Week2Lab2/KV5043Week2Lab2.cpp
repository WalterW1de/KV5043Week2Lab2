#include <iostream>
#include <string>

int main()
{
	std::string playerName;
	std::cout << "Enter your full name: ";
	std::getline(std::cin, playerName);
	std::cout << "Hello, " << playerName << "!" << std::endl;

		return 0;
}