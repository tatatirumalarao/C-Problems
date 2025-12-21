#include <stdio.h>
int main()
{
    int salary;
    scanf("%d",&salary);
    if(salary>=30000)
    {
        salary=salary+(salary*10/100);
            printf("%d",salary);
    }
        else
        {
            salary=salary+(salary*15/100);
            printf("%d",salary);
}
    return 0;
}