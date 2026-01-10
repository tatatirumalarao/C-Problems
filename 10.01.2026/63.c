#include <stdio.h>
int main() 
{
    int start,end,i,j,isprime;
    scanf("%d",&start);
    scanf("%d",&end);
    printf("prime numbers between %d and %d are: \n",start,end);
    for(i=start;i<=end;i++)
    {
        if(i<2)
            continue;
            isprime=1;
             
        for(j=2;j<=i/2;j++)
            {
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1)
                printf("%d\n",i);
    }
    return 0;
}