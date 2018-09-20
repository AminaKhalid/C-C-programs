/*Write a C Program that creates a Union with members char a, short b, int c and long d. In the
program prompt the user to input values of type char, short, int and long and the store the
values in the Union variables. Include code which prints the size of the Union. Each Union
variable should also be printed. Examine the output in a comment in the program.*/
#include <stdio.h>

//union declaration
union number
{
	//different types of variables
	char w;
	short x;
	int y;
	long z;
	
};
int main(void)
{
	//declaring union in main
	union number type;
	
	printf("\nenter a character: ");
	scanf("%c", &type.w);	//stores in char w
	printf("%c\n", type.w);	//prints the value of w(user input)
	
	printf("\nenter a value of type short: ");
	scanf("%hi", &type.x);	//stores in x
	printf("%hi\n", type.x);	//prints the value of x(user input)
	
	printf("\nenter an integer: ");
	scanf("%d", &type.y);	//stores in y
	printf("%d\n", type.y);	//prints the value of y(user input)
	
	printf("\nenter a value of type long: ");
	scanf("%li", &type.z);	//stores in z
	printf("%li\n", type.z);	//prints the value of z(user input)
	
	printf("\nchar: %c\n short:%hi\n integer: %d\n long: %li", type.w,type.x,type.y,type.z);

	printf("\nunion size: %d\n", sizeof(type)); //size of the union

	
//the members of this union share the same storage space 
//the last number entered overwrites the other numbers as it is a union
//the union gets the size of the biggest variable type, in this case, int, whereas a struct would get the size of the variable types added together.
	
}

