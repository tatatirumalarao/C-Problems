#include<stdio.h>
int main() 
{
    int purchases,sales;
    float purchase_price,sales_price;
    scanf("%d %d",&purchases,&sales);
    scanf("%f %f",&purchase_price,&sales_price);
    float turnover=(purchases*purchase_price)+(sales*sales_price);
    printf("Daily Turnover:Rs %.2f\n",turnover);
    return 0;
}