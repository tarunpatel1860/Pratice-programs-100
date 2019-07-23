#include<stdio.h>

int main()
{
	int arr[10]={5,3,7,5,2,1,6,9,8,10},i,j;
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
