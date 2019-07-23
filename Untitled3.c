#include<stdio.h>

int main()
 {
 	int n;
 	scanf("%d",&n);
 	
 	int rev=0,last;
 	while(n)
 	{
 		last=n%10;
 		rev=rev*10+last;
 		n/=10;
	}
	
	printf("%d",rev);
	
	return 0;
 }
