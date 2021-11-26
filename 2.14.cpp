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
            if(i == 0 || i == wys-1 || j == 0 || j == szer-1)      
                std::cout << "X";                                           
            else
                std::cout << " ";
        }
        std::cout << "\n";
	}
	}
