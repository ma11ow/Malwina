
#include <iostream>
#include<string>

auto  main() -> int
{
std::cout  << "Hello , Malwina Wirkus!\n";

	
	auto  value = std:: string {};
	auto value2= std:: string {};
	std:: getline(std::cin , value);
	std:: getline(std::cin , value2);
int wynik=std::stoi(value)+std::stoi(value2);

	std::cout << wynik;

}



	

