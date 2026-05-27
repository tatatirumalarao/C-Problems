#include <stdio.h>
#include<string.h>
int main() 
{
    char s1[20],s2[20],s3[20];
    int x,11,12,13;
    printf("\n\n enter the string constants \n");
    printf("?");
    scanf("%s %s",s1,s2);
    /* comparing s1 and s2 */
    x-strcmp(s1,s2);
    if(x!=0)
    {
        printf("\n\n strings are not equal\n ");
        strcat(s1,s2);  /* joining s1,s2 */
    }
    else
    {
        printf("\n\n strings are equal \n");
    }
    /* copying s1 to s2
    strcpy(s3,s1);
    /* finding length of strings */
    11=strlen(s1);
    12=strlen(s2);
    13=strlen(s3);
    /* output */
    return 0;
}