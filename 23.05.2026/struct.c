#include <stdio.h>
int main()
{
    struct LIBRARY;
    {
        char name[30];
        char author[20];
        int pages;
        float price;
    scanf("%s",&name);
    scanf("%s",&author);
    scanf("%d",&pages);
    scanf("%f",&price);
    printf("%s\n",name);
    printf("%s\n",author);
    printf("%d\n",pages);
    printf("%.2f\n",price);
    }
}