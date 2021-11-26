#include <iostream>
auto  main() -> int
{
	int a, b, i, j;
	int suma=0;
std::cout<< "podaj limit\n";
std::cin>>a;
std::cout<< "podaj dzielnik\n";
std::cin>>b;
if (a<0)
{
std::cout<<"prosze o dodatnie liczby..\n";
}
for (i=0; i<=a; i++)
{
	if (i%b==0){
		suma=suma+i;
		}
	
	
}
std::cout<< "suma liczb podzielnych przez:" << b << " w przedziale do"<<a<< " to:" <<suma<<"\n";
	return 0;
}
