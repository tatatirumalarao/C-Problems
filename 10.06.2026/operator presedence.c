#include <stdio.h>
int main() 
{
    int a=30,b=20,c=10;
    printf("a*b+c is : %d\n",a*b+c);
    printf("a*(b+c) is : %d\n",a*(b+c));
    printf("a+b*c is : %d\n",a+b*c);
    printf("a-b/c is : %d\n",a-b/c);
    printf("--a+b*c is : %d\n",--a+b*c);
    printf("a-b++/(c-3) is : %d\n",a-b++/(c-3));
    return 0;
}