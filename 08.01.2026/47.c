#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter the string\n");
    gets(str1);
    strcpy(str2,str1);
    printf("copy string %s\n",str2);
    return 0;
}