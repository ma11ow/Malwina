#include <iostream>


using namespace std;
int main()
{
 int  max, i,min;
 int tab[3];
 cout<<"Podaj 3 elemtow tablicy: "<<endl;
 for(i=0; i<3; i++)
 cin>>tab[i];
 max = tab[0];
 for(int i=0; i<3;i++)
 if(max<tab[i])
 max = tab[i];
 cout<<"Najwieksza liczba to: "<<max<<endl;

 return 0;

}
