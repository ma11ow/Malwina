#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

int main()

{

    int a;
    auto liczby = std::vector<int>();
     srand(time(nullptr));
    std::cout<<"wielkosc tablicy:\n";
    std::cin>>a;

    for (int i =0; i<a; i++)
    {
        int b = rand() % a*5; 
        liczby.push_back(b);
 
   }
     
      std::sort(liczby.begin(), liczby.end());
   for (int i= 0; i <a; i++)
   {
      std::cout<<liczby.at(i)<<"\n";
   }

return 0;
}