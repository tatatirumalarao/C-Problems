#include <stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    n=n^(1<<k);
    printf("%d",n);
    return 0;
}