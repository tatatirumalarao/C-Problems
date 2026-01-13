#include <stdio.h>
#include<string.h>
int main() 
{
    char str[200];
    char *word;
    char smallest[50],largest[50];
    printf("enter a string:\n");
    fgets(str,200,stdin);
    str[strcspn(str,"\n")]='\0';
    word=strtok(str," ");
    strcpy(smallest,word);
    strcpy(largest,word);
    while(word!=NULL)
    {
        if(strlen(word)<strlen(smallest)){
            strcpy(smallest,word);
        }
        if(strlen(word)>strlen(largest)){
            strcpy(largest,word);
        }
        word=strtok(NULL," ");
    }
    printf("smallest word %s\n",smallest);
    printf("largest word %s\n",largest);
    return 0;
}