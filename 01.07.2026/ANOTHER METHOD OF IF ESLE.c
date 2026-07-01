#include <stdio.h>
int main() 
{
    char A[10] = "GREATER";
    char B[10] = "SMALLER";
    char C=100;
    char D=200;
    C>D ? printf("%s",A): printf("%s",B);
}