#include <stdio.h>
#include<string.h>
int main() 
{
    char name[]="mahesh babu";
    int n;
    n=strlen(name);
    
    printf("%s has %d letters\n\n",name,n);
    printf("%s\n",strcat(strcat(name," is a super star"),"The boss"));
    return 0;
}