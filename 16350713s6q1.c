/*Write a C Program which prompts the user for employee records and then writes each
record to a file called students.txt. The user should be prompted to enter each student’s
first name, surname, student number, phone number, field of study, and GPA. Be careful to
provide code to allow a user to indicate they have stopped inputting data and to check for
invalid data. The result should be a text file with several student details*/


#include<stdio.h>
int main (void)
{
	FILE *cfPtr; //file pointer
	
	//fopen opens file or exits program if unable to create file
	if ((cfPtr = fopen("students.txt", "w")) == NULL)
	{
		puts("File could not be opened");
	}
	
	else
	{
		puts("Enter first name, surname, student number, phone number, field of study and GPA ");
		puts("Enter EOF to end input. ");
		printf("%s", "? ");
		
		char name[30]; //student name
		char surname[30]; //student surname
		unsigned int number; //student number
		unsigned int phone; //student phone number
		char study[30]; //field of study
		double GPA; //GPA
		
		scanf("%29s%29s%d%d%29s%lf", name, surname, &number, &phone, study, &GPA);
		//write all the information into file using fprint
		while(!feof(stdin))
		{
			fprintf(cfPtr, "%s %s %d %d %s %.2f\n", name, surname, number, phone, study, GPA);
			printf("%s", "? ");
			scanf("%29s%29s%d%d%29s%lf", name, surname, &number, &phone, study, &GPA);
		}
	
		fclose(cfPtr);	//closes file
	}
}