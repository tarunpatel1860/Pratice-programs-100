#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
 {
 	char *str=(char*)malloc(sizeof(char)*100);
 	gets(str);
 	
 	int len=strlen(str),i,j;
 	j=len-1;
 	
 	for(i=0;i<(len/2);i++)
 	{
 		if(str[i]!=str[j--])
 		{
 			printf("Not palindrome");
 			return 0;
		}
	}
	
	printf("It is palindrome");
	
	return 0;
 }
