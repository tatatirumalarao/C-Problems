#include <stdio.h>
void incr(void)
{
    auto int a=1;
    printf("%d\t",a);
    a=a+1;
}
int main()
{
    incr();
    incr();
    incr();
    return 0;
}