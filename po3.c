/*Write a C Program which prints the size (in bytes) of the following variables to the screen.
Depending on your system, you may get different answers to other students.
 char
 int
 long
 long long
 double
 long double
 float
 an array of integers
 a pointer to an array*/

#include <stdio.h>

size_t getSize(int *ptr); //function prototype

int main (void)
{
	//defining variables of different types
	char charSize;
	int intSize;
	long longSize;
	long long longlongSize;
	double doubleSize;
	long double longDoubleSize;
	float floatSize;
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};	//assigning values to array
	int arrayB[20]; //create array
	
	printf("\nThe size in bytes of char is %u", sizeof(charSize));	//print the size of char using the sizeof operator
	printf("\nThe size in bytes of int is %u", sizeof(intSize));	//print the size of int using the sizeof operator
	printf("\nThe size in bytes of long is %u", sizeof(longSize));	//print the size of long using the sizeof operator
	printf("\nThe size in bytes of long long is %u", sizeof(longlongSize));	//print the long long of char using the sizeof operator
	printf("\nThe size in bytes of double is %u", sizeof(doubleSize));	//print the size of double using the sizeof operator
	printf("\nThe size in bytes of long double is %u", sizeof(longDoubleSize));	//print the size of long double using the sizeof operator
	printf("\nThe size in bytes of float is %u", sizeof(floatSize));	//print the size of float using the sizeof operator
	printf("\nThe size in bytes of the array of integers is %u", sizeof(array));	//print the size of the array using the sizeof operator
	printf("\nThe size in bytes of a pointer to an array is %u", sizeof(arrayB));	//print the size of arrayB using the sizeof operator
	
	return 0;
}
//return size of ptr
size_t getSize(int *ptr)
{
	return sizeof(ptr);
}