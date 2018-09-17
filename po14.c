/*To demonstarte the difference in memory allocation between a Structure and a Union
A Union is allocated memory based on the memory required to store the largest element of a union.
A Structure is allocated memory by summing the memory size of all the members.*/

#include <stdio.h>

//Define Union
union unionType
{
	//different types
	int unionA;
	float unionB;
	char unionC[32];
	long unionD;
   
}unionT;
//Define Structure
struct structType
{
	//different types
	int structA;
	float structB;
	char sturctC[32];
	long structD;
   
} structT;

int main()
{
	//print the size of union and struct using the sizeof operator
	printf("Size of Union: %d", sizeof(unionT));
	printf("\nSize of Structure = %d", sizeof(structT));
	
	return 0;
}