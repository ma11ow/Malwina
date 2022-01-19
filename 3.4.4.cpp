#include <iostream>
#include <cmath>

void v(float &h, float &r)
{
    r = (M_PI *(r*r) );
    h = ((r/3)*h);
}

int main()
{
    float h, r;

    std::cout<<"promien podstawy stozka: \n";
    std::cin>>r;

    std::cout<<"wysokosc stozka: \n";
    std::cin>>h;

    v(h, r);

    std::cout<<"p podstawy stozka = "<<r<<"\n";
    std::cout<<"objetosc stozka = "<<h<<"\n";

    return 0;

}