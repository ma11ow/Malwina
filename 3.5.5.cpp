#include <iostream>
#include <algorithm>
#include <string.h>

void funkcja(void* x)
{
    auto proxy = reinterpret_cast<char*>(x);
    std::cout<<"unsorted:"<<proxy<<"\n";
}

auto fpsort(void* y,size_t l,void(*fp)(void* x)) -> void
{
    (fp)(y);
    auto proxy = reinterpret_cast<char*>(y);

     std::sort(proxy , proxy+l);

    std::cout<<"sorted:"<<proxy<<"\n";
}

int main()
{
    char tab[]="lubie placki";
    fpsort(tab,strlen(tab),funkcja);
    return 0;

}