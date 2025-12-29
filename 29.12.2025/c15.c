#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("alpphabet");
    }
    else 
    {
        printf("not a alphabet");
    }
    return 0;
}