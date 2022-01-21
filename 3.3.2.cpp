#include <cmath>
#include <iostream>
float stozek(float h, float r, float R)
{
    float V;
    V = ((M_PI / 3) * h)* ((R * R) + (R * r) + (r * r));
    return V;
}
int main()

{
    int x;
    for (;;)
    {

        float h, R, r;

            std::cout<<"wysokosc:\n";
                std::cin>>h;

            std::cout<<"promien gornej:\n";
                std::cin>>r;

            std::cout<<"promien dolnej:\n";
                std::cin>>R;

                 if (h<=0 || r<=0 || R<=0)
            {
                std::cout<<"dlugosc nie moze byc 0 lub mniej\n";
                break;
            }
 

            std::cout<<"Pojemnosc stozka scietego wynosi: "<<stozek(h, r, R)<<"\n";
            std::cout<<"jezeli chcesz zakonczyc program wpisz zero, jezeli nie podaj dowolna liczbe \n";
            std::cin>>x;

            if(x==0)
            {
                break;
            }
            
    }
        

   
return 0;
}
