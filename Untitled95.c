#include<stdio.h>

int Add(int x, int y) 
{ 
    if (y == 0) 
        return x; 
    else
        return Add( x ^ y, (x & y) << 1); 
}  

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	printf("%d",Add(x,y));
	printf("\n%d",(x-(-y)));
	return 0;
}
