#include <iostream>


using namespace std;
int main()
{
 int  max, i,min;
 int tab[3];
 cout<<"Podaj 3 elemtow tablicy: "<<endl;
 for(i=0; i<3; i++)
 cin>>tab[i];
 min = tab[0];
 for(int i=0; i<3;i++)
 if(min>tab[i])
 min = tab[i];
 cout<<"Najmniejsza liczba to: "<<min<<endl;

 return 0;

}
