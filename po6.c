/*Write a C program that creates a two dimensional integer array. The size of the array should
be specified by user input. The array should then be filled by prompting the user to enter
data (an integer) for each element. It should not be possible to add duplicates to the array.
The program should print the following results:
1. The contents of the array (this should look like a table).
2. The sum of each row.
3. The sum of each column.
4. The sum of all values in the array.
5. The average of each row.
6. The average of each column.
7. The average of the complete array.
8. The frequency of each number which occurs in the array.
9. A random number from the array.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArray(int rows, int cols, int theArray[][cols]);
void fillArray(int rows, int cols, int theArray[][cols]);
int randomNumber(int rows,  int cols, int theArray[][cols]);

int main (void)
{
	int i, j;
	int rows, columns;
	int data;
	int sum = 0;
	float av;
	int total = 0;
	float average;
	int a,b;
	int number, frequency;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &columns);
	
	int array[rows][columns];
	
	fillArray(rows, columns, array);
	
	printf("The array is \n" );
	printArray(rows, columns, array);
	
	//sum and average of row
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			sum = sum + array[i][j];
			av = sum/rows;
		}
		printf("sum of row %d is %d\n", i, sum);
		printf("average of row %d is %.2f\n", i, av);
		sum = 0;
	}
	
	//sum and average of column
	for(j=0; j<columns; j++)
	{
		for(i=0; i<rows ;i++)
		{
			sum = sum + array[i][j];
			av = sum/columns;
		}
		printf("sum of column %d is: %d\n",j,sum);
		printf("average of column %d is %.2f\n", j, av);
		sum = 0;// reset the sum for next column
	}
	
	//sum and average of all elements
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns ;j++)
		{
			total = total + array[i][j];
			average = total/(rows*columns);
		}
	}
	printf("sum of all elements is %d\n", total);
	printf("average of all elements is %.2f\n", average);
	
	//frequency
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			number = array[i][j];
			for(a=0; a<rows; a++)
			{
				for(b=0;b<columns;b++)
				{
					if (number == array[a][b])
					{
						frequency++;
					}
				}
			}
			printf("The frequency of %d is %d\n\n", number, frequency);
			frequency=0;
		}
	}
	
	printf("Random number from Array: %d\n\n", randomNumber(rows, columns, array));
	
	return 0;
}
void fillArray(int rows, int cols, int theArray[][cols])
{
	int i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter an integer for row [%d] column[%d]\n",i,j);
			scanf("%d", &theArray[i][j]);
		}
	}
}
void printArray(int rows, int cols, int theArray[][cols])
{
	int i, j;
	
	for (i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			printf("%d ", theArray[i][j]);
		}
		printf("\n");
	}
	puts("");
}
int randomNumber(int rows,  int cols, int theArray[][cols])
{
	srand(time(NULL)); //seed for random number generator
    int r = rand()%rows;
    int c = rand()%cols;

    return theArray[r][c];
}

