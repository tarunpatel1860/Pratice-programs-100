#include<stdio.h>

int main()
{
	int arr[10]={5,4,9,6,8,4,2,5,9,7};
	int lg=arr[0],slg=arr[0],i;
	
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>lg)
		{
			slg=lg;
			lg=arr[i];
		}
		
		else if(arr[i]>slg && arr[i]<lg)
		slg=arr[i];
	}
	
	printf("\nSecond largest is : %d",slg);
	return 0;
}
