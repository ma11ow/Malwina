#include <iostream>
#include <string.h>

void *memset(void *ptr, int x, size_t a);
  int main()
  {
    std::cout<<"przed funkcja memset ";
    char tab[40] = "gardze ludzmi ktorzy jedza kebab";
    puts (tab);


    memset(tab + 13,50, 11*sizeof(char));
    std::cout<<" po uzyciu memset: ";
    puts (tab);

return 0;
  }