#include <stdio.h>
int main() 
{
    char oper;
    double firstNumber,secondNumber;
    printf("Enter an operator\n");
    scanf("%c",&oper);
    printf("enter first operand\n");
    scanf("%lf",&firstNumber);
    printf("enter second operand\n");
    scanf("%lf",&secondNumber);
    switch(oper)
    {
        case '+' :
            printf("%.1lf + %.1lf% = %.1lf",firstNumber,secondNumber,firstNumber+secondNumber);
            break;
        case  '-' :
            printf("%.1lf - %.1lf%  = %.1lf",firstNumber,secondNumber,firstNumber-secondNumber);
            break;
        case '*' :
            printf("%.1lf * %.1lf%  = %.1lf",firstNumber,secondNumber,firstNumber*secondNumber);
            break;
        case '/' :
            printf("%.1lf  / %.1lf%  = %.1lf",firstNumber,secondNumber,firstNumber/secondNumber);
            break;  

            /* operation is doesnot match any case constant(+,-,*,/)  */

        default :
            printf("error operation is not correct");
    }
    return 0;
}