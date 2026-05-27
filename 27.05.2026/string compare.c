#include <stdio.h>
#include<string.h>
int main() 
{
    char A[5]="BVS";
    char B[5]="bvs";
    char C[5]="YES";
    char D[5]="NO";
    printf("\n\n");
    printf("A and B are equal\n\n");
    if(strcmp(A,B)==0)
    {
        printf("A and B are %s\n",C);
    }
    else
    {
        printf("A and B are %s\n",D);
    }
    printf("%s\n",strcmp(A,B)==0?C:D);
    return 0;
}