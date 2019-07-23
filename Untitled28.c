#include <stdio.h> 

void printPascal(int n) 
{ 
	int line;
	for (line = 1; line <= n; line++) 
	{ 
	
		int C=1 ,i,j; 
		
		for(j=line;j<=n-1;j++)
			printf(" ");
			
		for (i = 1; i <= line; i++) 
		{		
			printf("%d ",C); 
			C = C * (line - i) / i; 
		} 
		printf("\n"); 
	} 
} 

int main() 
{ 
	int n;
	scanf("%d",&n); 
	printPascal(n); 
	return 0; 
} 


