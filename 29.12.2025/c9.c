#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}