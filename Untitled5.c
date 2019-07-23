#include<stdio.h>

int factorial(int n)
{
	int fact=n;
	
	if(n==0)
	return 1;
	
	while(--n)
	fact=fact*n;
	
	return fact;
}

int main()
{
	 int n;
	 scanf("%d",&n);
	 
	 printf("Factorial of %d is : %d",n,factorial(n));
	 return 0;
}
