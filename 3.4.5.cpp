#include <iostream>
#include <algorithm>
#include <vector>


int copyTableToVector(int tab[100][8], int indeks);

int copyTableToVector(int tab[100][8], int indeks)
{
	int reszta;
	std::vector<int>vector;
	reszta=indeks%3;
	
	if(reszta==0)
	{
		reszta=5;
	}
	
	for(int j=0; j<8; j++)
	{
		int a=tab[reszta-1][j];
		vector.push_back(a);
	}

	int *ptr;
	ptr=&vector.back();
	int w=*ptr;
	return w;

}

int main()
{
	int tab[100][8];
	int indeks;
	
	for(int i=0; i<100; i++)
	{
		for(int j=0; j<8; j++)
		{
			tab[i][j]=rand()%9+1;
		}				
	}

	std::cout<<"gimme indeks: "<<"\n";
	std::cin>>indeks;
	std::cout<<"reszta: "<<copyTableToVector(tab, indeks);
	
	
return 0;
}