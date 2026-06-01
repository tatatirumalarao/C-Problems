#include <stdio.h>
int main() 
{
    int a=8,b=10,op1,op2;
    op1=a<b ? a:b;
    printf("op1 %d\n",op1);
    op2=a>b ? a:b;
    printf("op2 %d\n",op2);
    return 0;
}