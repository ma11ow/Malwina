
#include <iostream>
#include<string>

auto  main() -> int
{
std::cout  << "Hello , Malwina Wirkus!\n";

	
	auto  value = std:: string {};
	auto value2= std:: string {};
	std:: getline(std::cin, value);
	std:: getline(std::cin, value2);
int x = std::stoi(value);
int z = std::stoi(value2);
if (value>value2)
{
//wyświetl std::stoi(value)
std::cout << value <<"\n";
}
else
{
//wyświetl std::stoi(value2)
std::cout << value2 <<"\n";

}
	

}



	

