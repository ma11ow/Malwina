#include <iostream>
auto  main() -> int
{
std::cout  << "podaj dwie liczby\n";
int a;
int b;
std::cin >> a;
std::cin >> b;
if (a>b)
{
	std::cout << a << ">" << b <<"\n";
}
if (a==b)
{
	std::cout << a << "=" << b <<"\n"	; 
}if (a<b)
{
		std::cout << a<< "<" <<b<< "\n";
}
}
