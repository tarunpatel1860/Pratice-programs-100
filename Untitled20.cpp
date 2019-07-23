#include<stdio.h>

void bs(int arr[],int l,int r,int t)
{
	if(l>r)
	{
		printf("Element not found!!!");
		return;
	}
	int mid=(l+r)/2;
	
	if(arr[mid]==t)
	{
		printf("Found at %d",mid+1);
		return;
	}
	
	else if(arr[mid]>t)
	{
		bs(arr,l,mid-1,t);
	}
	
	else
	{
		bs(arr,mid+1,r,t);
	}
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
	
	bs(arr,0,n,t);
}
