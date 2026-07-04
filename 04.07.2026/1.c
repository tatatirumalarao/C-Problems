#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ones=num%10;
    int tens=(num/10)%10;
    int Hundreds=(num/100)%10;
    printf("Ones : %d\n",ones);
    printf("Tens : %d\n",tens);
    printf("Hundreds : %d\n",Hundreds);
    return 0;
}