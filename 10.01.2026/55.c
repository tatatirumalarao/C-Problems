#include <stdio.h>
int main() 
{
    char str[100];
    int i,count=0;
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;

        }
    }
    printf("spaces %d",count);
    return 0;
}