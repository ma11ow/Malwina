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
   while(true)
    {
        float h, R, r;

            std::cout<<"wysokosc:\n";
                std::cin>>h;

            std::cout<<"promien gornej:\n";
                std::cin>>r;

            std::cout<<"promien dolnej:\n";
                std::cin>>R;

            std::cout<<"Pojemnosc stozka scietego wynosi: "<<stozek(h, r, R)<<"\n";
        

        int x;
   if (h==0 || r==0 || R==0) 
   {
      std::cout<<"nie moze byc zero\n";
   }
    std::cout<<"jezeli chcesz zakonczyc program wybierz 0 i enter\n";
       std::cin>>x;
if (x!=0){
    true;

}
else{
	false;
	}

return 0;
    }

}
