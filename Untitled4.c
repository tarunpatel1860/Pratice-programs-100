#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
	printf("0");
	
	else if(n==2)
	printf("0 1");
	
	else if(n>2)
	{
		int first=0,second=1,i,next;
		printf("%d %d ",first,second);
		
		for(i=1;i<=(n-2);i++)
		{
			next=second+first;
			first=second;
			second=next;
			printf("%d ",next);
		}
	}
	
	return 0;
}
