#include <iostream>

void border(int n)
{
    for(int i=0; i<n; i++)
    {
        std::cout<<"-";
    }
    std::cout<<"\n";
}

void checkers(int n)
{
    for(int i=1; i<=n; i++)
    {
        if( i%2!=0)
        {
        std::cout<<"x*******     *******     *******     *******     *******      x"<<"\n";
        std::cout<<"x*******     *******     *******     *******     *******      x"<<"\n";
        std::cout<<"x*******     *******     *******     *******     *******      x"<<"\n";
        }
        else
        {
        std::cout<<"x     *******     *******     *******     *******      *******x"<<"\n";
        std::cout<<"x     *******     *******     *******     *******      *******x"<<"\n";
        std::cout<<"x     *******     *******     *******     *******      *******x"<<"\n";
        }
    }
}
int main()
{
        border(63);
        checkers(8);
        border(63);
    return 0;
}