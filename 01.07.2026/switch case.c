#include <stdio.h>
int main() 
{
    char grade = 'E';
    switch(grade)
    {
        case  'A' :
            printf("Excellent\n");
            break;
        case  'B' :
        case  'C' :
            printf("Well done\n");
            break;
        case  'D' :
            printf("You Passed\n");
            break;      
        case  'F' :
            printf("Better try again\n");
            break;
        default  :
            printf("level is grade\n");          
    }
    printf("Your grade is %c\n",grade);
    return 0;
}