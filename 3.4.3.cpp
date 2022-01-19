#include <iostream>

void swap(int *prt1, int *ptr2);

int main()
{
    int *ptr1;
    int *ptr2;
    int x, y;
    x=1;
    y=2;
    ptr1 = &x;
    ptr2 = &y;
    std::cout<<" x i y = "<<*ptr1<<" i "<<*ptr2 << std::endl;
    swap(ptr2,ptr1);
    std::cout<<" x i y switched = "<<*ptr1<<" i "<<*ptr2 << std::endl;

return 0;
}

void swap(int *ptr1, int*ptr2)
{
    int var1 = *ptr1;
    int var2 = *ptr2;
    *ptr1 = var2;
    *ptr2 = var1;

}