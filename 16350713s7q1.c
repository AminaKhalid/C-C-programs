/*Write a C Program that defines and uses a macro which calculates the minimum of 2
integers. Extend this program with another macro to calculate the minimum of 4 integers.
This extended program must use the macro which calculates the minimum of 2 integers.
Submit the extended program. The program should get the input from the user from the
console and print the result to the console.*/

#include <stdio.h>
#define MIN(a, b)(((a) < (b)?(a):(b))) //define macro
#define MIN2(a,b,c,d)(MIN (MIN (a,b), MIN (c,d))) //define macro 2

int main (void)
{
	int a, b, c, d, m;
	int min;
	
	//user input first 2 numbers
	printf("enter a number: ");
	scanf("%d", &a);
	printf("enter a number: ");
	scanf("%d", &b);
	
	//the values of a and b are evaluated and assigned to variable min
	min = MIN(a, b);
	
	printf("\nthe smallest is %d\n", min);
	
	// input another 2 numbers
	printf("\nenter a number: ");
	scanf("%d", &c);
	printf("enter a number: ");
	scanf("%d", &d);
	
	// MIN2 is assigned to m
	m = MIN2(a, b, c, d);
	
	printf("\nthe smallest is %d from the four numbers", m);

	
	
}