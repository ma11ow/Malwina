#include <iostream>
auto  main() -> int
{
int i,a, j;
int suma=0;
int suma1;
bool pierwsza = true;
std::cout  << "podaj liczbę\n";
std::cin>> a;

if (a==0 || a==1)
{
 std::cout<< "nie jest liczba pierwsza\n";
}
    else {
        for (i = 2; i <= a/2; ++i) 
        {
            if (a % i == 0) 
            {
			
                pierwsza = false;
                break;
            }
            else {
				 for (i=1; i<=a; ++i){
				suma1=(suma+i);
			
				std::cout << "suma liczb pierwszych do liczby:"<< a << "wynosi: " << suma1 <<"\n";
}
				}
        }
    }
   
    if (pierwsza=false){
        std::cout << a << " nie jest liczba pierwsza";
}
    return 0;
}

