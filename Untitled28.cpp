#include <bits/stdc++.h> 

using namespace std; 
void printPascal(int n) 
{ 
	
for (int line = 1; line <= n; line++) 
{ 
	int C ; 
	for (int i = 1; i <= line; i++) 
	{
		for()
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


