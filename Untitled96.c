#include<stdio.h>

int subtract(int x, int y) 
{ 
    if (y == 0) 
        return x; 
    return subtract(x ^ y, (~x & y) << 1); 
} 

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	printf("%d",subtract(x,y));
	printf("\n%d",(x+(~y)+1));
	return 0;
}
