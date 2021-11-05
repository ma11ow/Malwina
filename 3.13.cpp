#include <iostream>
#include <time.h>


auto main() -> int 
{
int a =1, b =50, tab[50];

srand(time(0));

for(int i =0; i <10; i++)
{
	tab[i] =rand()%(b-a+1)+a;
	std::cout << tab[i]	<<std::endl;
}
return 0;
}
