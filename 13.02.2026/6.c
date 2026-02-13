#include <stdio.h>
int main() 
{
    int ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='0' ||  ch=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonants");
    }
    return 0;
}