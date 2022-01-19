
#include <iostream>
#include <string>

void print(std::string *ptr)
{
    std::cout <<& *ptr<< " = " << *ptr << std::endl;

}
int main()
{
    std::string var = "Hello, World!";
    std::string * ptr;
    ptr = &var;

    print(ptr);


return 0;
}