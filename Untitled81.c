#include<stdio.h> 
#define N 4 

void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n) 
{ 
	int i = 0, j = 0,row,col; 
 
	for (row = 0; row < n; row++) 
	{ 
		for (col = 0; col < n; col++) 
		{ 
			if (row != p && col != q) 
			{ 
				temp[i][j++] = mat[row][col]; 

				if (j == n - 1) 
				{ 
					j = 0; 
					i++; 
				} 
			} 
		} 
	} 
} 

int determinantOfMatrix(int mat[N][N], int n) 
{ 
	int D = 0; 

	if (n == 1) 
		return mat[0][0]; 

	int temp[N][N]; 

	int sign = 1,f;  
 
	for (f = 0; f < n; f++) 
	{ 
		getCofactor(mat, temp, 0, f, n); 
		D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1); 
 
		sign = -sign; 
	} 

	return D; 
} 

void display(int mat[N][N], int row, int col) 
{ 
	int i,j;
	
	for (i = 0; i < row; i++) 
	{ 
		for (j = 0; j < col; j++) 
			printf(" %d", mat[i][j]); 
		printf("\n"); 
	} 
} 

int main() 
{ 
	
int mat[N][N] = {
				{1, 0, 2, -1}, 
				{3, 0, 0, 5}, 
				{2, 1, 4, -3}, 
				{1, 0, 5, 0} 
				}; 
				
display(mat,N,N);

printf("Determinant of the matrix is : %d", determinantOfMatrix(mat, N)); 
return 0; 
} 

