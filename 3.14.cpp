#include <iostream>
int wynik = 0;
const int MAX_N=100;
auto main() -> int 
{
int a, b, n;


std::cout  << "Podaj rozmiar tablicy\n";
	std::cin >>a;
	std::cout  << "Podaj start tablicy\n";
	std::cin >>b;
int tab[a];
for ( int i=0; i<a; i++)
{
    std::cout << "tablica[" << i+1 << "] = ";	
    std::cin >> tab[i];
}
wynik = 0;
 
for (int i =b; i<a; i++)

	wynik += tab[i]; 
	std::cout<< wynik <<"\n";
return 0; 
	}

