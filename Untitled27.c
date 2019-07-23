#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter rows and columns : ");
	scanf("%d %d",&r,&c);
	
	int arr[r][c],i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&arr[i][j]);
	
	int s=arr[0][0],l=arr[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]<s)
			s=arr[i][j];
			
			if(arr[i][j]>l)
			l=arr[i][j];
		}
		
	}
	
	printf(" Smallest : %d\n",s);
	printf(" Largest : %d",l);
	
	return 0;
}
