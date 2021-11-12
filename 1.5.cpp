#include <iostream>

auto main () -> int

{
    std::cout << "podaj liczbę\n";
    int a;
    std::cin >>a;
if (a>0)
{
	std::cout << "wartość absolutna liczby wynosi:" << a;
}
else
{
	std::cout << "wartość absolutna liczby wynosi:" << -(a); 
	
}
  return 0;  
}
 
