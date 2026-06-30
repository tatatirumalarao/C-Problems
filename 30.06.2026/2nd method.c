#include <stdio.h>
int main() 
{
    int a=100;
    int b,c;

    printf("The value of A is %d\n\n",a);
    a=a+1;

    printf("The value of AFTER INCREMENTING  is %d\n\n",a);
    b=a++;
     printf("The value of B is %d\n\n",b);

     c=++a;
      printf("The value of A is %d\n\n",a);
      printf("The value of C is %d\n\n",c);
}