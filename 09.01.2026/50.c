#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0;
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='a' || ch=='E' || ch=='I' || ch=='0' || ch=='U')
            {
                count++;
            }
    }
    printf("%d",count);
    return 0;
}