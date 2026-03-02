#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d\n",b);
    //Your Code goes here!
    
    return 0;
}