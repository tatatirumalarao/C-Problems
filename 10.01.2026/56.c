#include<stdio.h>
#include<math.h>
int main()
{
    int num,oriNum,rem,dig=0;
    double res=0.0;
    scanf("%d",&num);
    oriNum=num;
    while(oriNum!=0)
    {
        oriNum=oriNum/10;
        dig++;
    }
    oriNum=num;
    while(oriNum!=0){
        rem=oriNum%10;
        res=res+pow(rem,dig);
        oriNum=oriNum/10;
    }
    if((int)res==num)
    {
        printf(" %d armstrong number ",num);

    }
    else
    {
        printf(" %d not an armstrong number ",num);
    }
    return 0;
}