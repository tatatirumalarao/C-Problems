#include <stdio.h>
int main() 
{
    char *name;
    int length;
    char *cptr=name;
    name = "kavali";
    printf("%s\n",name);
    while(*cptr !='\0')
    {
        printf("%c is stored at address %u\n",*cptr,cptr);
        cptr++;
    }
    length = cptr - name;
    printf("\nlength of the string %d\n",length);
    return 0;
}