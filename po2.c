/*Conversion of binary to decimal (base-2 to base-10) numbers and back is an important
concept to understand as the binary numbering system forms the basis for all computer and
digital systems. Using recursive techniques, write a C program to convert a decimal to
binary. To show your understanding and reasoning of the approach, provide a
demonstration of how the conversion works in comments at the start of the program.*/

#include <stdio.h>

//function prototype
int binary(int);

int main(void)
{
	//variable declaration
	int number;
	int bin;
	
	//user input
	printf("Enter a decimal number: ");
	scanf("%d", &number);
	
	//call the function and assign it to bin;
	bin = binary(number);
	//print the binary number
	printf("Binary Number: %d", bin);
	
	return 0;
}
int binary (int number)
{
	int conversion;
	
	//if the number is greater than 0, return 0
	if (number == 0)
	{
		return 0;
	}
	//else perform the conversion
	else
	{
		//formula for converting a number to binary
		conversion = (number % 2 + 10 * binary(number / 2));
	}
	
	//return the answer
	return conversion;
}