#include<stdio.h>

int main()
{
	int arr[10]={5,4,9,6,8,4,2,5,9,7};
	int sm=arr[0],ss=arr[0],i;
	
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]<sm)
		{
			ss=sm;
			sm=arr[i];
		}
		
		else if(arr[i]<ss && arr[i]>sm)
		ss=arr[i];
	}
	
	printf("\nSecond smallest is : %d",ss);
	return 0;
}
