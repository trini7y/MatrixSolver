#include <stdio.h>
// #define ROW 2
// #define COLUMN 2

// N is the column of the matrix
// M is the row of the matrix

int add(int A[][ n ], int B[][ n ], int C[][ n ]);
int sub(int A[][ n ], int B[][ n ], int C[][ n ]);

int main(void){

	printf("This program solves M x N matrix");

	int m, n;
	printf("Enter the M x N matrix:");
	scanf("%d %d", &m, &n);

	int a[ m ][ n ];
	// int b[ ROW ][ COLUMN ];
	int c[ m ][ n ];

	size_t i;
	size_t j;

	

	// Gets the values of matrix A
	for( i = 0; i < m; ++i){
		for( j = 0; j < n; ++j){
			int matrix_a;
			printf("Enter the Element (a)m %lu n %lu  :",  i , j );
			scanf("%d", &matrix_a);
			a[ i ][ j ] = matrix_a;
	  }	
	}
	// Gets the values of matrix B
	for( i = 0; i < m; ++i){
		for( j = 0; j < n; ++j){
			int matrix_b;
			printf("Enter the Element (b)m %lu n %lu  :", i,  j  );
			scanf("%d", &matrix_b);
			b[ i ][ j ] = matrix_b;
	  }	
	}

	// Prints the values of matrix A
	printf("Element in matrix A is\n ");

	for(i = 0; i < 2; ++i ){
		for(j = 0; j < 2; ++j ){
			printf("%d\t", a[ i ][ j ]);
		}	
	}

		printf("\n");
	// Gets the values of matrix B
	printf("Element in matrix B is \n ");
	for(i = 0; i < 2; ++i ){
		for(j = 0; j < 2; ++j ){
			printf("%d\t", b[ i ][ j ]);
		}	
	}

	printf("\n");

	int val_A = add(a , b , c);
	int val_S = sub(a , b , c);

	int *mem_A = &val_A;
	int *mem_S = &val_S;
	
	printf("The address is %p\n", mem_A);
	printf("The address is %p\n", mem_S);
}	

// Adds Matrix  and B
int add(int A[][ n ], int B[][ n ], int C[][ n ]){
	size_t i;
	size_t j;
	for(i = 0; i < m; ++i){
		for( j = 0; j < n; ++j){
			int total;
			total = A[i][j] + B[i][j];
			C[i][j] = total;
		}
	}

	printf("The total value after summing matrix a and b is\n ");
	for(i = 0; i < m; ++i ){
		for (j = 0; j < n; ++j)
		{
			printf("%d \t", C[i][j]);
		}
	}
	printf("\n");
}

int sub(int A[][ n ], int B[][ n ], int C[][ n ]){
	size_t i;
	size_t j;

	for(i = 0; i < m; ++i){
		for( j = 0; j < n; ++j){
			int total;
			total = A[i][j] - B[i][j];
			C[i][j] = total;
		}
	}
	printf("The total value after subtracting matrix a and b is\n ");
	for(i = 0; i < m; ++i ){
		for (j = 0; j < n; ++j)
		{
			printf("%d \t", C[i][j]);
		}
	}
	printf("\n");
}