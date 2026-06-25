#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define null 0
int main()
{
	char*buffer;
	/*allocating memory*/
	if((buffer=(char*)malloc(10))==null)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	printf("Buffer of size %d created\n",_msize(buffer));
	strcpy(buffer,"NAMAKKAL");
	printf("\nBuffer contains : %s\n",buffer);
	/*real location*/
	if((buffer=(char*)realloc(buffer,15))==null)
	{
		printf("R location failed.\n");
		exit(1);
	}
	printf("\n buffer size modified.\n");
	printf("\nbuffer still contains.\n",buffer);
    strcpy(buffer, "Sankari");
    printf("\nBuffer now contains : %s\n", buffer);
    free(buffer);
    return 0;
}