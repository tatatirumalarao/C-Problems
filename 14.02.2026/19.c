#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("digit");
    }
    else 
    {
        printf("alphabet");
    }
    return 0;
}