#include <iostream>
#include <algorithm>
#include <string.h> // strlen

void memrev(void* ta,size_t a)
{
    auto bro = reinterpret_cast<char*>(ta);

    char r[a];

        for(int i=0; i<a;i++)
        {
        r[i] = bro[a-1-i];
        }
        for(int i=0; i<a;i++)
        {
        bro[i] = r[i];
        }
        std::cout<<bro;
}


int main()
{
    char tab[]="lubie placki";
    memrev(tab,strlen(tab));
    return 0;

}