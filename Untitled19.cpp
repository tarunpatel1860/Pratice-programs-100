#include<stdio.h>

void ls(int arr[],int cur,int n,int t)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==t)
		{
			printf("Element found at %d pos",i+1);
			return;
		}
	}
	
	printf("Element not found !!!!");
	return;
	
}

int main()
{
	int n;
	printf("Enter size of array: ");
	scanf(" %d ",&n);
	
	int arr[n],i,t;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element to search: ");
	scanf("%d",&t);
	
	ls(arr,0,n,t);
}
