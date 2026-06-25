#include <stdio.h>
int main() 
{
    FILE *fp1,*fp2;
    fp1=fopen("tiru","w");
    fp2=fopen("tata","r");
    printf(fp1,fp2,"tiru,tata")
    return 0;
}