#include <iostream>
#include <string>

auto print_int(void* n)
{
    auto proxy = reinterpret_cast<int*>(n);

    for (int i = 0; i < 4; i++)
        {
        std::cout << proxy[i]<<" ";
        }
        std::cout<<"\n";
}

auto print_str(void* n)
{
     auto proxy = reinterpret_cast<std::string*>(n);

    for (int i = 0; i < 4; i++)
        {
        std::cout << proxy[i]<<" ";
        }
        std::cout<<"\n";
}


auto fpprint(void* n,void(*fp)(void*n))
{
    (fp)(n);
    return 0;

}
auto main() -> int
{

char tabint[4] = {1, 2, 3, 4};

std::string tabstr[4]= {"[0]", "hello","\n" "[1]", "world"};


fpprint(tabstr,print_str);

return 0;

}




