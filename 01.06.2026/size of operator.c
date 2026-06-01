#include <stdio.h>
int main() 
{
    int i;
    char c;
    printf("i %d\n",sizeof i);
    printf("character %d\n",sizeof c);
    printf("integer %d\n",sizeof(int));
    printf("float %d\n",sizeof(float));
    printf("double %d\n",sizeof(double));
    return 0;
}