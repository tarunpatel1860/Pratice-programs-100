#include<stdio.h>

void count(int n)
{
	printf("%d ",n);
	
	if(n==100)
	return;
	
	count(n+1);
}

int main()
{
	count(1);
	return 0;
}
