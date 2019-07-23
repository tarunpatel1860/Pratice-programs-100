#include<stdio.h>

int isPerfect(long int n) 
{ 
    long int sum = 1,i; 
    
    for ( i=2; i*i<=n; i++) 
    { 
        if (n%i==0) 
        { 
            if(i*i!=n) 
                sum = sum + i + n/i; 
            else
                sum=sum+i; 
        } 
    }  
    
     if (sum == n && n != 1) 
          return 1; 
   
     return 0; 
} 

int main()
{
	long int n;
	scanf("%ld",&n);
	
	if(isPerfect(n))
	printf("Perfect Number");
	
	else
	printf("Not perfect number");
	
	return 0;
}
