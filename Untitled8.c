#include<stdio.h>

int gcd(int a,int b)
{
	if(a==0)
	return b;
	
	return gcd(b%a,a);
}

int main()
{
	int a,b;
	printf("enter two number for gcd: ");
	scanf("%d %d",&a,&b);
	
	printf("\nGCD is : %d",gcd(a,b));
	
	return 0;
}
