#include <stdio.h>
int main() {
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum=sum*i/2;
         
        printf("%d\n",sum);
    }
    //Your Code goes here!
    
    return 0;
}