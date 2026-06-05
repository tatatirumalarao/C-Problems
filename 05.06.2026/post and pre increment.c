#include <stdio.h>
int main() 
{
    int p,q;
    p=10;
    q=20;
    /* post increment */
    printf("value of p  %d\n",p);
    printf("value of p++ %d\n",p++);
    printf("new value of p %d\n",p);
    /* pre increment */
    printf("value of q  %d\n",q);
    printf("value of ++q %d\n",++q);
    printf("new value of q %d\n",q);
    return 0;
}