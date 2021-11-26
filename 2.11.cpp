#include <iostream>

auto  main () -> int
{
int i, j;
int wys;
int szer;
std::cout<< "podaj wysokosc i szerokosc\n";
std::cin>>wys;
std::cin>>szer;

	for(int i = 0; i < wys; i++)
    {
        for(int j = 0; j < szer; j++)                 
        {           
                std::cout << "X";                                           
        }
        std::cout << "\n";
	}
	}
