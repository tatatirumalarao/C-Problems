#include <stdio.h>
int main() 
{
    int A,B,RESULT;
    char OPERATION;
    printf("Enter a value for A :");
    scanf("%d",&A);
    printf("\n");
    printf("Enter a value for B :");
    scanf("%d",&B);
    printf("\n");
    printf("ENTER AN OPERATION :");
    scanf(" %c",&OPERATION);
     if(OPERATION == '+')
    {
        RESULT=A+B;
    }
    else if(OPERATION == '-')
    {
        RESULT=A-B;
        printf("A=%d %c %d = %d",A,OPERATION,B,RESULT);
    }
    else if(OPERATION == '*')
    {
        RESULT=A*B;
    }
    else if(OPERATION == '/')
    {
        RESULT=A/B;
        printf("A=%d %c %d = %d",A,OPERATION,B,RESULT);
    }

}