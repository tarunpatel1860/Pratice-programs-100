#include<stdio.h>

int power(int a,int b)
{
	if(b==0)
	return 1;
	
	int temp=power(a,b/2);
	if(b&1)
	return temp*temp*a;
	
	else
	return temp*temp;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	printf("The ans is : %d",power(a,b));
	return 0;
}
