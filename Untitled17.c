#include<stdio.h>


int main()
{
	int year;
	scanf("%d",&year);
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			printf("Its leap year");
			
			else
			printf("Its not leap year");
		}
		
		else
		printf("Its leap year");
	}
	
	else 
	printf("Not leap year");
	return 0;
}
