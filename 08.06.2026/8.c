#include <stdio.h>
#include<ctype.h>
int main() 
{
    /*scanning characters */
    char A;
    printf("ENTER A CHARACTER :\n");
    scanf("%c",&A);
    printf("You entered %c", toupper(A));
    /* second ,method for char scanning*/
    char B;
    printf("\n");
    printf("Type Another Character \n");
    getchar();
    B=getchar();
    putchar(B);
}