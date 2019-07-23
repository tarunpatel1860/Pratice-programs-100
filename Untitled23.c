#include<stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int arr[10]={5,3,7,5,2,1,6,9,8,10},i,j,k,w;
	
	for(i=0;i<10-1;i++)
	{
		int min=arr[i];
		k=i;
		for(j=i+1;j<10;j++)
		{
			
			if(arr[j]<min)
			{
				min=arr[j];
				k=j	;			
			}
		}
		
		swap(&arr[i],&arr[k]);
	
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
