#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>


int trojkat(int a, int h);
int prostokat(int a, int b);
int kolo(int r);
int trapez(int a, int b, int h);
int foremny (int a);

int main()
{
for(;;)
{
    int a, b, h, r;
    char n;

    std::cout<<"wybierz figure: \n";

    std::cout<<"1 trojkat\n2 prostokat\n3 kolo\n4 trapez\n5 foremny\n6 exit \n";
    n = getchar();


   switch(n)
{
   case '1':
    {
        
        std::cout<<" dlugosc podstawy: \n";
        std::cin>>a;
        std::cout<<" wysokosc: \n";
        std::cin>>h;
        std::cout<<"pole trojkata = "<<trojkat(a, h)<<"\n";

    }
break;
   case '2':
    {
        
        std::cout<<"1st bok: \n";
        std::cin>>a;
        std::cout<<"drugi bok: \n";
        std::cin>>b;
        std::cout<<"pole prostokata = "<<prostokat(a, b)<<"\n";

    }
break;
    case '3':
    {
       
        std::cout<<"promien kola: \n";
        std::cin>>r;
        std::cout<<"ole kola = "<<kolo(r)<<"\n";

    }
break;
    case '4':
    {
        
        std::cout<<"gorna podstawa: \n";
        std::cin>>a
        std::cout<<"dolna podstawa: \n";
        std::cin>>b;
        std::cout<<"wysokosc: \n";
        std::cin>>h;
        std::cout<<"pole trapezu = "<<trapez(a,b,h)<<"\n";

    }
break;
    case '5':
    {
        
        std::cout<<"bok szesciokata foremnego: \n";
        std::cin>>a;
        std::cout<<"pole szesciokata foremnego = "<<foremny(a)<<"\n";

    }
break;

    case '6':
   {
       exit(0);
    }
   break;
}
}
return 0;
}

int trojkat(int a, int h)
{
    if(a <=0 || h <=0)
    {
        return -1;
    }
    else
        {
    return ((a*h)/2);
        }
}
int prostokat(int a, int b)
{
    if(a<=0 || b<=0)
    {
        return -1;
    }
    else
    {
    return a*b;
    }
}
int kolo(int r)
{
    if(r<=0)
    {
        return -1;
    }
    else
        {
        return 3.14*(r*r);
        }
}
int trapez(int a, int b, int h)
{
    if(a<=0 || b<=0 || h<=0)
    {
        return -1;
    }
    else
    {
    return (((a+b)*h)/2);
    }
}
int foremny(int a)
{
    if(a<=0)
    {
        return -1;
    }
    else
    {
        int b = sqrt(3);
    return (((a*a)*b)/4);
    }
}
