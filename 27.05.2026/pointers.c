#include <stdio.h>
int main() 
{
    int x,y;
    int *ptr;
    x=43;
    ptr=&x;
    y=*ptr;
    printf("value of x is %d\n\n",x);
    printf("%d is stored at addr %u\n",x,&x);
    printf("%d is stored at addr %u\n",&x,&x);
    printf("%d is stored at addr %u\n",*ptr,ptr);
    printf("%d is stored at addr %u\n",ptr,&ptr);
    printf("%d is stored at addr %u\n",y,&y);
    *ptr=100;
    printf("\n Now x = %d\n ",x);
    return 0;
}