#include <stdio.h>
int main() 
  //*UNDERSTAND THE SIZE OF VARIABLES  *//
{
    int A;
    char B;
    float C;
    long D;
    double E;
    unsigned int F;
    printf(" The size of integer = %d BYTES\n", sizeof(A));
    printf("The size of character is %d BYTES\n",sizeof(B));
    printf("The size of float is %d BYTES\n",sizeof(C));
    printf("The size of long is %d BYTES\n",sizeof(D));
    printf("The size of double is %d BYTES\n",sizeof(E));
    printf("The size of unsigned int  is %d BYTES\n",sizeof(F));
}