#include <stdio.h>
#include<string.h>
int main() 
{
    char sentence[200];
    int i,length=0,maxlength=0;
    int endIndex=0;
    printf("enter  a sentence ");
    fgets(sentence,200,stdin);
    for(i=0;i<=strlen(sentence);i++){
        if(sentence[i]!=' '  && sentence[i]!='\0' && sentence[i]!='\n'){
        if(length>maxlength){
            maxlength=length;
            endIndex=i;
        }
        length=0;
      } 
    }
    printf("longest word");
    for(i=endIndex-maxlength;i<endIndex;i++){
        printf("%c",sentence[i]);
    }
    printf("\nlength of longest word  %d\n",maxlength);
    return 0;
}