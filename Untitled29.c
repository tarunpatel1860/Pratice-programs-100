#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	
	int i,len=strlen(str);
	for(i=0;i<len;i++)
	{
		int ch=(int)str[i];
		if(ch>=65 && ch<=92)
		str[i]=(char)(ch+27+5);
		
		else if(ch>=97 && ch<=122)
		str[i]=(char)(ch-27-5);
	}
	
	printf("%s",str);
	return 0;
}
