#include <stdio.h>
int main() 
{
    int A=1234;
    int THIRD_DIGIT,FOURTH_DIGIT;
    THIRD_DIGIT=A%10;
    printf("The THIRD_DIGIT %d\n",THIRD_DIGIT);
    FOURTH_DIGIT=A/10;
    printf("The FOURTH_DIGIT %d\n",FOURTH_DIGIT);
}