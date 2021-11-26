#include <iostream>

auto  main() -> int
{
int i=0;
int a;
int silnia=1;
std::cout<<"podaj liczbe, ktora chcesz podniesc do silni\n";
std::cin>>a;
do {
	++i;
	
	silnia=silnia*i;
	}
while (i<a);

	


	

		std::cout<<silnia;
	
}

