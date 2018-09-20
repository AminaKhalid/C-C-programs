/*Write a C Program which reads in the contents of the sequential file students.txt (created in
question 1 above). It should read in each record and if the GPA is greater than 3.20, print
that record to the screen in a neatly formatted way otherwise it should print a series of star
symbols for that record.*/

#include<stdio.h>
int main (void)
{
	FILE *cfPtr; //file pointer
	
	//fopen opens file or exits program if file cannot be opened
	if ((cfPtr = fopen("students.txt", "r")) == NULL)
	{
		puts("File could not be opened");
	}
	
	else
	{
		//read information from file
		char name[30];
		char surname[30];
		unsigned int number;
		unsigned int phone;
		char study[30];
		double GPA;
		
		printf("%-13s%-13s%-13s%-13s%-13s%-13s\n", "Name", "Surname", "studentNo", "phoneNo", "study", "GPA");
		fscanf(cfPtr, "%29s%29s%d%d%29s%lf", name, surname, &number, &phone, study, &GPA);
		//while not end of file
		while (!feof(cfPtr))
		{
			printf("%-13s%-13s%-13d%-13d%-13s%.2f\n", name, surname, number, phone, study, GPA);
			fscanf(cfPtr, "%29s%29s%d%d%29s%lf", name, surname, &number, &phone, study, &GPA);
			//if the GPA is less than 3.2, print stars instead of the record
			if(GPA<3.20)
			{
				printf("*********************************************************************");
				fscanf(cfPtr, "%29s%29s%d%d%29s%lf", name, surname, &number, &phone, study, &GPA);
			}
		}
	
	  fclose(cfPtr); //close the file
	}

}