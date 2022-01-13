#include <iostream>
#include <vector>

int main()
{
    auto ve = std::vector<int>();
    int a;
    std::cout<<"wielkosc tablicy: \n";
    std::cin>>a;


    for (int i =0; i<a; i++)
    {
        int b = rand() % a*2;
        ve.push_back(b);
    }

    for (int i =0; i<a; i++)
    {
        std::cout<<ve.at(i)<<"\n";;
    }


    int srednia = 0.0;

    for(int i=0;i<a;i++)
    {
        srednia=srednia+ve.at(i);
    }
    srednia = srednia/a;

    std::cout<<"srednia= "<<srednia<<"\n";

return 0;
}