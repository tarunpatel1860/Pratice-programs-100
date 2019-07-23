#include<stdio.h> 
 
void lower(int matrix[3][3], int row, int col) 
{ 
	int i, j; 
	
	for (i = 0; i < row; i++) 
	{ 
		for (j = 0; j < col; j++) 
		{ 
			if (j>i) 
			{ 
				printf("0 "); 
			} 
			else
			printf("%d ",matrix[i][j]); 
		} 
		printf("\n");
	} 
} 
 
int main() 
{ 
	int matrix[3][3] = {{1, 2, 3}, 
						{4, 5, 6}, 
						{7, 8, 9}}; 
	int row = 3, col = 3; 
	
	lower(matrix, row, col); 		
	return 0; 
} 

