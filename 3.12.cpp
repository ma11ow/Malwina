#include <iostream>

const int MAX_N=100;
auto main() -> int 
{
int a, b;
int tab[MAX_N];	
std::cout  << "Podaj rozmiar tablicy\n";
	std::cin >>a;
	std::cout  << "Podaj start tablicy\n";
	std::cin >>b;
for ( int i=0; i<a; i++)
{
	tab[i]=b++;
	std::cout << tab[i]	<<std::endl;
	}

return 0;
}
