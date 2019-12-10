#include <stdio.h>
#define ROW 2
#define COLUMN 2

int add(int A[][ COLUMN ], int B[][ COLUMN ], int C[][ COLUMN ]);
int sub(int A[][ COLUMN ], int B[][ COLUMN ], int C[][ COLUMN ]);

int main(void){

	int a[ ROW ][ COLUMN ];
	int b[ ROW ][ COLUMN ];
	int c[ ROW ][ COLUMN ];
	size_t i;
	size_t j;

	// Gets the values of matrix A
	for( i = 0; i < ROW; ++i){
		for( j = 0; j < COLUMN; ++j){
			int matrix_a;
			printf("Enter the Element (a)row %lu column %lu  :",  i , j );
			scanf("%d", &matrix_a);
			a[ i ][ j ] = matrix_a;
	  }	
	}
	// Gets the values of matrix B
	for( i = 0; i < ROW; ++i){
		for( j = 0; j < COLUMN; ++j){
			int matrix_b;
			printf("Enter the Element (b)row %lu column %lu  :", i,  j  );
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
int add(int A[][ COLUMN ], int B[][ COLUMN ], int C[][ COLUMN ]){
	size_t i;
	size_t j;
	for(i = 0; i < ROW; ++i){
		for( j = 0; j < COLUMN; ++j){
			int total;
			total = A[i][j] + B[i][j];
			C[i][j] = total;
		}
	}

	printf("The total value after summing matrix a and b is\n ");
	for(i = 0; i < ROW; ++i ){
		for (j = 0; j < COLUMN; ++j)
		{
			printf("%d \t", C[i][j]);
		}
	}
	printf("\n");
}

int sub(int A[][ COLUMN ], int B[][ COLUMN ], int C[][ COLUMN ]){
	size_t i;
	size_t j;

	for(i = 0; i < ROW; ++i){
		for( j = 0; j < COLUMN; ++j){
			int total;
			total = A[i][j] - B[i][j];
			C[i][j] = total;
		}
	}
	printf("The total value after subtracting matrix a and b is\n ");
	for(i = 0; i < ROW; ++i ){
		for (j = 0; j < COLUMN; ++j)
		{
			printf("%d \t", C[i][j]);
		}
	}
	printf("\n");
}