#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int choice;
	int array;
	int num;
	int i;
	int *ptr;
	float *ptr2;
	int sum = 0;
	int average = 0;
	
	float num2;
	float sum2 =0;
	float average2 = 0;
	
	printf("Enter 1 for type integer or 2 for type float: ");
	scanf("%d", &choice);
	
	if (choice == 1)	//for type int
	{
		printf("enter the size of the array: ");
		scanf("%d", &num);
		
		//allocate space in memory for an array of num elements of type int
		ptr = (int*) calloc(num, sizeof(int));
		
		printf("Enter elements: ");
		for(i=0;i<num;i++)
		{
			scanf("%d", ptr + i);
			sum = sum + *(ptr + i);	//sum 
			average = sum / num;	//find average
		}
		
		printf("Sum = %d", sum);
		printf("\nAverage = %d", average);
	}
		
	if (choice == 2)	//for type float
	{
		printf("enter the size of the array: ");
		scanf("%f", &num2);
		
		//allocate space in memory for an array of num elements of type float
		floatPtr = (float*) calloc(num, sizeof(float));
		
		printf("Enter elements: ");
		for(i=0;i<num2;i++)
		{
			scanf("%f", ptr2 + i);
			sum2 = sum2 + *(ptr2 + i);
			average2 = sum2 / num2;
		}
		
		printf("Sum2 = %f", sum2);
		printf("\nAverage2 = %f", average2);

	}
		printf("Enter 1 to add more elements to the array: ");	//to enter more elements
		scanf("%d", &option);
		
		int number;
	
		printf("\nEnter number: ");
		scanf("%d", &number);
		
		ptr = realloc(ptr, number2);	//ptr is reallocated with size of number2
		
	
	
	return 0;
}