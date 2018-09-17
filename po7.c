/*C Program that defines and uses 2 macros; one macro should print the elements of
an integer array and the other macro should print the elements in reverse order. The array
can be defined in the program as follows:
int myArray[10] = { 2, 4, 6, 8, 10, 20, 30, 40, 60, 80};*/


#include <stdio.h>

#define PRINT(myarray, length) for(int i=0;i<10;i++){ \
								printf("%d ", myArray[i]);}							

#define REVERSE(myArray, length) for(int i=10; i>0; i--){ \
								printf(" %d", myArray[i-1]);}

int main(void)
{
	int myArray[10] = { 2, 4, 6, 8, 10, 20, 30, 40, 60, 80};
	
	PRINT(myArray, 10);
	
	REVERSE(myArray, 10);

	return 0;
}