#include <stdio.h>
#include<string.h>
int main() 
{
    char name[12];
    gets(name);
    puts(name);
    printf("The name You typed is  %s", strupr(name) );
}