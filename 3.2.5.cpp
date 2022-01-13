#include <iostream>
#include <ctime>

void quicksort(int tab[],int start,int end)
{
int pivot=tab[(start+end)/2];
int p=(start-1);
int q=(end +1);
do{

    while (tab[++p]<pivot);

    while (tab[--q]>pivot);

    if (p<=q)
    {
    std::swap(tab[p], tab[q]);
    }
}
while (p<=q);


 if (q>start)
 {
     quicksort(tab,start, q);
 }
 if (p<end)
 {
     quicksort(tab, p, end);
 }
 
}
int main()
{
    int tab[64];
     for(int i=0;i<64;i++)
        {
            tab[i] =  rand() %99;
        }
    std::cout<<"sorted:\n";
    quicksort(tab ,0, 63);
    for(int i = 0; i < 64; i++)
    {
    std::cout<<tab[i]<<"\n";
    }
return 0;
}