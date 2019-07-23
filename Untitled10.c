#include<stdio.h>

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("\nValues of  a and b after swapping are: %d , %d",a,b);
}

int main()
{
	int a,b;
	printf("Enter values of a & b: ");
	scanf("%d%D",&a,&b);
	
	printf("\nValues of  a and b before swapping are: %d , %d",a,b);
	swap(a,b);
	return 0;
}
