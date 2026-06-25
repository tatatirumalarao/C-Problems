#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int *num,*freq,i,size;
    printf("\n enter the size of list : ");
    scanf("%d",&size);
    num=(int*)malloc(size*sizeof(int));
    printf("\n enter the numbers : ");
    for(i=0;i<size;i++)
    {
        printf("\n enter num[%d]:",i);
        scanf("%d",&num[i]);
    }
    if(num[i]<0 || num[i]>4)
    {
        printf("\n number should be with range(0-4)");
        i--;
        continue;
    }
    freq = (int*)calloc(5,sizeof(int));
    for(i=0;i<size;i++)
    {
        freq[num[i]]++;
        printf("\n the frequency of the number are : ");

    }
    for(i=0;i<5;i++)
    {
        printf("\n freq[%d] = %d",i,freq[i]);
    }
    return 0;
}