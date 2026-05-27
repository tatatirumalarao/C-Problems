#include <stdio.h>
int main() 
{
    int *p,sum,i;
    int x[5]={1,2,3,4,5};
    i=0;
    p=x;        /* initialization with base address of x */
    printf("element value address \n\n");
    while(i<5)
    {
        printf("x[%d] %d %d\n", i, *p,p);
        sum=sum+*p;  /* accessing array element */
        i++,p++;     /* incrementing pointer */
    }
    printf("\n sum = %d\n",sum);
    printf("\n &x[0] = %u\n",&x[0]);
    printf("\n p = %u\n",p);

    
    return 0;
}