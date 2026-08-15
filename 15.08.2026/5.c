#include <stdio.h>
int main() 
{
    int A=11;
    float B=2;
    float C=A/B;
    float D=C*2;
    printf("The value of A is %012d\n\n",A);
    printf("The value of C is %5.2f\n\n",C);
    printf("The value of D is %2d\n\n",(int)D);
}