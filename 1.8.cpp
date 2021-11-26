#include <iostream>
auto  main() -> int
{
std::cout  << "podaj trzy liczby\n";
int a;
int b;
int c;

std::cin >> a;
std::cin >> b;
std::cin >> c;

if (a>=b && a>=c)
{
	std::cout << a <<"\n";
}
if (b>=a && b>=c)
{
	std::cout << b<<"\n"	; 
}if (c>=a && c>=b)
{
		std::cout << c<<"\n";
}
}
