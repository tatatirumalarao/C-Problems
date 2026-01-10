#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,length,flag=1;
    printf("enter a string:");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrpme");
    }
    
    return 0;
}