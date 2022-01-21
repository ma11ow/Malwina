#include <iostream>
#include <random>
#include <ctime>

void funkcja(int const);
void call_with_random_int(void(*fp)(int const)) ;

int main()
{
	auto fp = &funkcja;

	call_with_random_int(funkcja);
   return 0;

}

void call_with_random_int(void(*fp)(int const))
{
    srand((int)time(0));
    int random;
    random = (rand()% 100) +1;

    (fp)(random);
}

void funkcja(int const a)
{
    std::cout<<"podana funkcja "<<a<<"\n";
}