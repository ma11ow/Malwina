
#include <iostream>
#include <random>
#include <ctime>


void funkcja(int const);
void call_with_random_int(void(*fp)(int const));

void funkcja(int const a)
{
	std::cout<<"Funkcja: "<<a<<"\n";
}

void call_with_random_int (void(*fp)(int const))
{
	srand((int)time(0));
	int n;
	n=(rand()%100)+1;
    std::cout<<n<<"\n";
	
}

int main()
{
	auto fp=&funkcja;
	call_with_random_int(funkcja);
}