
#include <iostream>
#include<string>

auto main() -> int 
{
std::cout  << "Podaj dwie liczby\n";

int a;
int b;
int s;
	std::cin >>a;
	std::cin >>b;
	std::cin >>s;
	if (s==0)
	{
		return 0;
		}
 if (s<0)
{
	s=s*(-1);
}


 for (int i = a; i<b; i = i+s)

	std::cout<<i<<'\n';
}
