#include<stdio.h>

void ls(int arr[],int cur,int n,int t)
{
	if(arr[cur]==t)
	{
		printf("Element found at %d pos",cur+1);
		return;
	}
	
	else if(cur>=n)
	{
		printf("Element not found !!!!");
		return;
	}
	
	else
	ls(arr,cur+1,n,t);
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
