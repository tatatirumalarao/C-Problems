#include <stdio.h>
int main() 
{
    int A=26;
    int ONCE_DIGIT,TENS_DIGIT;
    ONCE_DIGIT = A%10;
    printf("The ONCE_DIGIT = %d\n",ONCE_DIGIT);
    TENS_DIGIT=A/10;
    printf("The TENS_DIGIT = %d\n",TENS_DIGIT);
}