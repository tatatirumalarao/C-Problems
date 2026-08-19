#include <stdio.h>
int main() 
{
    int a,b;
    int *p1,*p2;
    p1=&a,p2=&b;
    char c,d;
    char *p3,*p4;
    p3=&c,p4=&d;
    float e,f;
    float *p5,*p6;
    p5=&e,p6=&f;
    printf("The addr of a %u  and b %u \n\n",&a,&b);
    /* now the address of a and b*/
    /* incrementing pointers */
    p1++;
    p2++;

    printf("The addr of c %u  and d %u \n\n",&c,&d);
    p3++;
    p4++;

    printf("The addr of e %u and f %u \n\n",&e,&f);
    p5++;
    p6++;
    return 0;
}