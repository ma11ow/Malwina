#include <iostream>

auto  main() -> int
{
int i=0;
int a;
int silnia=1;
std::cout<<"podaj liczbe, ktora chcesz podniesc do silni\n";
std::cin>>a;
while (i<a){

	++i;
	
	silnia=silnia*i;
}

	

		std::cout<<silnia;
	
}


