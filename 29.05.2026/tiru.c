#include <stdio.h>
int main() 
{
    FILE *f1,*f2,*f3;
    int number,i;
    printf("contents of Data file\n\n");
    f1=fopen("DATA","w");
    for(i=1;i<=30;i++)
    {
        scanf("%d",&number);
        if(number==-1) break;
        putw(number,f1);
    }
    fclose(f1);
    f1=fopen("DATA","r");
    f2=fopen("ODD","w");
    f3=fopen("EVEN","w");
    /* read from SATA file */
    while((number = getw(f1))!=EOF)
    {
        if(number %2==0)
        {
            putw(number,f3);  /* write to even file */
        }
        else
        {
            putw(number,f2);  /* write to odd file */
        }
        fclose(f1);
        fclose(f2);
        fclose(f3);
        f2=fopen("ODD","r");
        f3=fopen("EVEN","w");
        printf("\n\n contents of ODD file \n\n");
        while((number = getw(f2))!=EOF)    
        printf("%4d",number);
        printf("\n\n contents of EVEN file\n\n");
        while((number = getw(f3))!=EOF)
        printf("%4d",number);
        fclose(f2);
        fclose(f3);
    }
    return 0;
}