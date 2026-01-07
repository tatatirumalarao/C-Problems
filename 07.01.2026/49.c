#include<stdio.h>
int main()
{
    char str[100],rev[100];
    int i, length=0;
    printf("enter the string\n:");
    gets(str);
    while(str[length]!='\0')
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        rev[i]=str[length-i-1];
    }

    rev[i]='\0';
    printf("rev %s\n",rev);
    return 0;
}