#include <stdio.h>
#include<string.h>
int main()
{
    char username[10];
    int password;
    scanf("%s %d", username,&password);
    if(strcmp(username,"admin") ==0 && password==1234)
    {
        printf("login successful");
    }
    else
    {
        printf("login failed");
    }
    return 0;
}