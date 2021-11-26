#include <iostream>
auto  main () -> int
{
int i, j;
int ram;
int szer;
std::cout<< "podaj dlugosc ramienia trojkata\n";
std::cin>>ram;


	for(int i = ram; i >=0; i--)
    {
        for(int j = i; j>=0; j--)                 
        {           
                std::cout << "X";                                           
        }
        std::cout << "\n";
	}
	}
