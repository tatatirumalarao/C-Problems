#include<stdio.h>
int main()
{
    char str[100];
    int i,length=0;
    scanf("%s",&str);
    while(str[length]!='\0')
    {
        length++;
    }
    printf("reverse string");
    for(i=length-1;i>=0;i--){
        printf("%c",str[i]);}
    return 0;
}