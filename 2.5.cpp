#include <iostream>

int i, j, a, suma;
bool pierwsza = true;

auto ifpierwsza(int a)
{

	if (a== 1 || a==0)
	{
		return false;
	}
	for (int i = 2; i < a; ++i)
	{

		if (a % i == 0)
		{ 

			return false;
		}
	}

	return true;
}

auto main() -> int
{
	std::cout << "podaj liczbę ";
	std::cin >> a;
	std::cout << std::endl;

	for (j = 1; j <= a; ++j)
	{
		pierwsza = ifpierwsza(j);
		if (pierwsza)
		{
			suma = suma + j;
			std::cout << j << std::endl;
		}
	}

	std::cout << suma << std::endl;

	return 0;
}
