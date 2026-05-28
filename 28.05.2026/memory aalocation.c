#include <stdio.h>
#include<stdlib.h>
#define NULL 0
int main() 
{
    int *p,*table;
    int size;
    printf("\n what is the size of table?");
    scanf("%d",&size);
    printf("\n");
    /*--------------- memory allocation---------------*/
    if((table=(int*)malloc(size *sizeof(int)))==NULL)
    {
        printf("NO space available \n ");
        exit(1);
    }
    printf("\n address of the first bytes is %u\n",table);
    /* Reading table values */
    printf("\n input table values\n");
    for(p=table;p<table+size;p++)
    scanf("%d",p);
    /* printing table value in reverse order */
    for(p=table+size-1;p>=table;p--)
    {
        printf("%d is stored at address %u\n",*p,p);
    }
    return 0;
}