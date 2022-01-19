#include <iostream>



double fSum(double(*f)(double),int a, int b );
double funkcja(double a);

double fSum(double(*f)(double), int a, int b)
{
	float suma=0.0;
	for(int i=a; i<=b; i++)
	{
		suma+=f(i);
	}

return suma;
}

double funkcja(double a)
{
	return a*2;
}

int main()
{
	auto f=&funkcja;
	std::cout<<fSum(funkcja, 6, 9)<<"\n";
	
	
return 0;	
}