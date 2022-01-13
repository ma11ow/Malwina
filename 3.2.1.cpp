#include <iostream>
#include <array>

int main ()
{
    std::array <char, 99> ascii;
		for(int i=33; i<=126; i++)
			{
			ascii.at((i-33))= char(i);
			std::cout<<ascii.at(i-33);
			}
    return 0;
}
