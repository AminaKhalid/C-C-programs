/*To demonstrate the use of Calloc - finding the largest number */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//declare variables
	int i, elements;
	float *largestNum;
	
	//user input
	printf("How many Numbers do you want to compare: ");
	scanf("%d", &elements);
	
	//allocating memory using calloc for the number of elements
	largestNum = (float*) calloc(elements, sizeof(float));
	
	//enter the numbers
	for(i=0;i<elements;i++)
	{
		printf("\nEnter number: ");
		scanf("%f", largestNum + i);
	}
	
	for(i=0;i<elements;i++)
	{
		//if the next number is bigger than the current number
		if(*largestNum < *(largestNum + i))
			//assign that number to being the largestNum
			*largestNum = *(largestNum + i);
	}
	//print the largest Num to 2 decimal places
	printf("\nLargest Number = %.2f", *largestNum);
	
	return 0;
}