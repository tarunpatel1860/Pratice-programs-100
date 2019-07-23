#include<stdio.h>

int main()
{
	printf("#program 1 \n\n");
	{
		int i,j,k;
		for(i=1;i<=4;i++)
		{
			for(k=4;k>i;k--)
			printf(" ");
			
			for(j=1;j<=i;j++)
			{
				printf("%d ",i);
			}
			
			printf("\n");
		}
	}
	
	printf("\n#program 2 \n\n");
	{
		int i,j,k,m=1;
		for(i=1;i<=4;i++)
		{
			for(k=4;k>i;k--)
			printf(" ");
			
			for(j=1;j<=i;j++)
			{
				printf("%d ",m++);
			}
			
			printf("\n");
		}
	}
	
	printf("\n#program 3 \n\n");
	{
		int i,j,k;
		for(i=1;i<=4;i++)
		{
			for(k=4;k>i;k--)
			printf(" ");
			
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
