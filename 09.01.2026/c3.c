#include<stdio.h>
#include<string.h>
int main() 
{
    char str1[50],str2[50];
    scanf("%s",&str1);
    scanf("%s",&str2);
    if(strcmp(str1,str2)==0)
    {
        printf("both strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }

    
    return 0;
}