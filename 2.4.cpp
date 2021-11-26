#include <iostream>
auto  main() -> int
{
int i,a;

bool pierwsza = true;
std::cout  << "podaj liczbe aby sprawdzić, czy jest liczba pierwsza\n";
std::cin>> a;

if (a==0 || a==1)
{
 std::cout<< "nie jest\n";
}
    else {
        for (i = 2; i <= a/2; ++i) 
        {
            if (a % i == 0) 
            {
                pierwsza = false;
                break;
            }
        }
    }
    if (pierwsza)
        std::cout << a << " jest liczba pierwsza";
    else
        std::cout << a << " nie jest liczba pierwsza";

    return 0;
}
