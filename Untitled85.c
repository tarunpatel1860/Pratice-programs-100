#include<stdio.h>

int main()
{
	int arr[10]={4,8,1,4,8,2,1,3,9,2};
	int i,j,k,temp,n=10,count=0;
	
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]==temp)
			{
				for(k=j;k<n-1;k++)
				arr[k]=arr[k+1];
				
				n--;
				count++;
			}
		}
	}
	
	printf("\nCount is : %d \n",count);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
