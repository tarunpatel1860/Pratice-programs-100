#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int s=arr[0],l=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<s)
		s=arr[i];
		
		if(arr[i]>l)
		l=arr[i];
	}
	
	printf(" Smallest : %d\n",s);
	printf(" Largest : %d",l);
	
	return 0;
}
