#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

int main()
{
	char *s= (char*)malloc(sizeof(char) * 100);
	int i;
    printf("Enter the string : ");
    scanf("%[^\n]%*c", s);
    printf("Reverse of %s is : ", s);
    
	
	int len=strlen(s);
	for(i=len-1;i>=0;i--)
	printf("%c",*(s+i));
	
	return 0;
}
