#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100];
    int i=0;
    printf("enter a string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("uppercase string %s",str);
    return 0;
}