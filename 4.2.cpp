#include <iostream>

enum sport{plywanie, kolarstwo, bieganie, skokwdal, skokwbok};

int main()
{
int triathlon=3;

switch(triathlon)
{
	case plywanie|kolarstwo|bieganie:
		std::cout<<"TRIATHLON"<<endl;
		break;
}

return 0;
}