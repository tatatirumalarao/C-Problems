#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c",&ch);
    if((ch>='A' &&  ch<='Z') ||  (ch>='a' && ch<='z'))
    {
        printf("upper case ");
    } 
    else 
    {
        printf("digit");
    }
    return 0;
}