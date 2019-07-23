#include<stdio.h>

int main()
{
	int arr[10]={5,4,2,3,4,6,71,6,6,1};
	int i,j,temp,index,w,key;
	
	for(i=1;i<10;i++)
	{
		index=i-1;
		key=arr[i];
		
		while(index>=0 && arr[index]>key)
		{
			arr[index+1]=arr[index];
			index--;
		}
		
		arr[index+1]=key;
		
		for(w=0;w<10;w++)
		{
			printf("%d ",arr[w]);
		}
		
		printf("\n");
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
