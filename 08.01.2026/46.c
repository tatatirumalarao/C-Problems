#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("enter the string \n");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
            break;
            i++;
    }
    printf("length of string %d",i);
    return 0;

}