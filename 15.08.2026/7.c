#include <stdio.h>
int main() 
{
    int A,B,answer;
    printf("ENTER THE VALUE FOR A :\n");
    scanf("%d",&A);
    printf("-------------------\n");
    printf(" Hello my friend you Entered %d:\n",A);
    printf("ENTER THE VALUE FOR B :\n");
    scanf("%d",&B);
    printf("-------------------\n");
    printf(" Hello my friend you Entered %d:\n",B);
    /* adding A and B */
    answer = A+B;
    printf("adding A and B %d :\n",answer);
    answer = A-B;
    printf("subtraction A and B %d :\n",answer);
    answer = A*B;
    printf("multiply A and B %d :\n",answer);
    answer = A/B;
    printf("division A and B %d :\n",answer);


}