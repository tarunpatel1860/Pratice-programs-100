#include<stdio.h>

int main()
{
	int arr[10]={5,4,9,6,8,4,2,5,9,7};
	int lg=arr[0],i;
	
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>lg)
		{
			lg=arr[i];
		}
	}
	
	printf("\nlargest is : %d",lg);
	return 0;
}
