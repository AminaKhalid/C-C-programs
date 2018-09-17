#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int size_of_array,i;
	
	printf("\nEnter the size of the array: ");
	scanf("%d", &size_of_array);
	
	int *A = (int*)malloc(size_of_array*sizeof(int));
	
	for(i=0;i<size_of_array;i++)
	{
		A[i] = i+1;
	}
	
	int *B = (int*)realloc(A, 2*size_of_array*sizeof(int));
	printf("Previous address in memory = %d, New address = %d\n", A,B);
	
	for(i=0;i<2*size_of_array;i++)
	{
		printf("%d\n", B[i]);
	}
	
}