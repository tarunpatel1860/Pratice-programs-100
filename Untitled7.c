#include<stdio.h>

void fibo(int n,int first,int second)
{	
	if(n==0)
	return;
	
	else
	{
		int next;
		next=second+first;
		first=second;
		second=next;
		printf("%d ",next);
		fibo(n-1,first,second);
	}
}

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
		printf("0 1 ");
		fibo(n-2,0,1);
	}
	
	return 0;
}
