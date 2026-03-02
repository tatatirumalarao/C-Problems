#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    while(n>0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    printf("%d\n",count);
    //Your Code goes here!
    
    return 0;
}