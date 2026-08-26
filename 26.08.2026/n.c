#include <stdio.h>
int main() 
{
    char ch = 'X';
    printf("Value of ch is: %c\n", ch);

    char letter = 'A';
    printf("Value of letter is: %c\n", letter);

    char small = 'z';
    printf("Value of small is: %c\n", small);

    char digit = '7';
    printf("Value of digit is: %c\n", digit);

    char symbol = '@';
    printf("Value of symbol is: %c\n", symbol);

    char space = ' ';
    printf("Value of space is: %c\n", space);

    char newline = '\n';
    printf("This is newline character:%cNext line\n", newline);

    char tab = '\t';
    printf("This is tab character:%cTab space\n", tab);

    char backslash = '\\';
    printf("Value of backslash is: %c\n", backslash);

    char quote = '\'';
    printf("Value of quote is: %c\n", quote);

    char ascii = 65;
    printf("Value of ascii is: %c\n", ascii);

    char null = '\0';
    printf("Null character stored successfully\n");

    char grade = 'B', sec = 'C';
    printf("Value of grade is: %c\n", grade);
    printf("Value of sec is: %c\n", sec);

    const char YES = 'Y';
    printf("Value of YES is: %c\n", YES);

    unsigned char byte = 255;
    printf("Value of byte is: %u\n", byte);
}