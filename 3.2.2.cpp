#include <iostream>
#include <vector>

int main ()
{
    int a;
    std::vector<int>liczby;
    

        do
        {
        std::cout<<"Podaj liczbe: \n";
        std::cin>>a;
        liczby.push_back(a);
        }
        while (a!=0);
        int b = (liczby.size()-1);
        int c=0;
        do
        {
            std::cout<<liczby.at(c)<<"";
            c++;
            if(c%5==0)
            {
                std::cout<<"\n";
            }
        }    
            while(c<b);

    return 0;
}