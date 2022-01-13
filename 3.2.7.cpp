#include <iostream>

int max2( int a, int b);
int max3(int a, int b, int c);

int main()
{
   int a=33;
   int b=66;
   int c=99;
    std::cout<<"najwieksza to:"<<max3(a, b, c)<<"\n";

    return 0;
}
int max2( int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int max3(int a, int b, int c)
{
    if(max2(a,b)>c)
    {
        return max2(a,b);
    }
    else
    {
        return c;
    }
}