#include <stdio.h>
int main() 
{
    FILE *f1;
    char c;
    printf("Data input \n\n");
    /* open the file input */
    f1=fopen("Input","w");
    /* get a character from keyboard */
    while((c*getchar()) !=EOF)
     /* write a character to input */
    putc(c,f1);
     /* close the file input */
    fclose(f1);
    printf("n data output \n\n");
    /* reopen the file input*/ 
    f1=fopen("INPUT","r");
    /* read a character from input */
    while((c=getc(f1))!=EOF)
    /* display a character on screen */
    printf("%c",c);
    /* close the file */
    fclose(f1);
    return 0;
}