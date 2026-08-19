#include <stdio.h>
#include <string.h>
void main() {
     char chk ='t',str[30];
     int len, left, right;
     printf("\n Enter a string: ");
     scanf("%s",str);
     len = strlen(str);
     left = 0;
     right = len - 1;
     while(left<right &&chk =='t'){
        if(!(str[left]==str[right]))
        chk = 'f';
        left++;
        right--;
     }
     if(chk == 't'){
        printf("\n The string %s is a palindrome",str);
     }else{
        printf("\n The string %s is not a palindorme",str);
     }
}