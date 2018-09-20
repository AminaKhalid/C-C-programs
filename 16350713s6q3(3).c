//part 3 of question 3
//reading the file sequentially

#include <stdio.h>
//customer struct definition
struct customer
{
	char title; //song title
	char artist[30]; //song artist
	unsigned int year; //year
	char name[30]; //customer name
	unsigned int date; //date
};

int main (void)
{
	FILE *cfPtr;	//music.dat file pointer
	
	//opens the file, exits if cannot be opened
	if((cfPtr = fopen("music.txt", "rb"))== NULL)
	{
		puts("File could not be opened");
	}
	
	else
	{
		printf("%-13s%-13s%-13s%-13s%-13s\n", "Title", "Artist", "Year", "Customer", "Date");
		//read all records
		while (!feof(cdPtr))
		{
			//record with default information 
			struct customer record = {"", "", 0, "", 0};
			int result = fread(&record, sizeof(struct customer), 1, cfPtr);
			//display record
			if (result!=0 && record.title!=0)
			{
				printf("%-13s%-13d%-13s%-13d\n", record.title, record.artist, record.year, record.name, record.date);
			}
		}
	}
	
	fclose(cfPtr);
}