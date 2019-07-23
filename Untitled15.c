#include<stdio.h>
#include<string.h>

void insert_substring(char *str)
{
	char substr[100],temp1[100],temp2[100];
	printf("\nEnter subtring: ");
	gets(substr);
	int pos,i,k=0;
	printf("Enter position to be inserted: ");
	scanf("%d",&pos);
	
	for(i=0;i<pos-1;i++)
	{
		temp1[k++]=str[i];
	}
	
	k=0;
	
	for(i=pos-1;i<=strlen(str);i++)
	{
		temp2[k++]=str[i];
	}
	
	strcat(temp1,substr);
	strcat(temp1,temp2);
	strcpy(str,temp1);
	
}

void delete_nchar(char *str)
{
	char temp1[100],temp2[100];
	int n;
	printf("\nEnter number of char to be deleted: ");
	scanf("%d",&n);
	int pos,i,k=0;
	printf("Enter position from to be deleted : ");
	scanf("%d",&pos);
	
	for(i=0;i<pos-1;i++)
	{
		temp1[k++]=str[i];
	}
	
	k=0;
		
	for(i=pos+n-1;i<strlen(str);i++)
	{
		temp2[k++]=str[i];
	}

	if(k>0)
	strcat(temp1,temp2);
	strcpy(str,temp1);
	
}

void replace_char(char *str)
{
	int pos;
	char ch;
	
	printf("\nEnter char to be inserted  : ");
	scanf(" %c",&ch);
	
	printf("Enter position from to be replaced : ");
	scanf("%d",&pos);
	
	str[pos-1]=ch;	
}

int main()
{
	char str[100];
	printf("Enter a string: ");
	gets(str);
	
	insert_substring(str);
	printf("\n The result after insert is %s ",str);
	
	delete_nchar(str);
	printf("\n The result after delete is %s ",str);
	
	replace_char(str);
	printf("\n The result after replace is %s ",str);
	return 0;
}
