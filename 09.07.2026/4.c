#include <stdio.h>
int main() 
{
    enum TV{ news=2,cnbc=5,bbc=7,espn=6,sony=8,star=1};
    printf("enter the favorite tv channels : \n");
    printf("news :\t%d\n",news);
    printf("cnbc :\t%d\n",cnbc);
    printf("bbc  :\t%d\n",bbc);
    printf("espn :\t%d\n",espn);
    printf("sony :\t%d\n",sony);
    printf("star :\t%d\n",star);
    return 0;
}