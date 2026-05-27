#include <stdio.h>
#include<stdio.h>
int main() 
{
    char name[20]="tirumala";
    int n;
    n=strlen(name);
    char Degree="Dr";
    char join[]=strcat(name,Degree);
    printf("%s",join);
    return 0;
}