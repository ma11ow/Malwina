#include <iostream>

auto  main() -> int
{
int i, a;
int silnia=1;
std::cout<<"podaj liczbe, ktora chcesz podniesc do silni\n";
std::cin>>a;
for (i=1; i<=a; i++){
	silnia*=i;
	}
		std::cout<<silnia;

}

