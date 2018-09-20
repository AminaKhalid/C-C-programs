//part 2 of question 3
//writing data randomly to a random-access file

#include<stdio.h>
//struct definition
struct customer
{
	char title; //song title
	char artist[30]; //song artist
	unsigned int year; //year
	char name[30]; // customer name
	unsigned int date; //date
};

int main (void)
{
	FILE *cfPtr;	//music.dat file pointer
	
	//opens the file, exits if cannot be opened
	if ((cfPtr = fopen("music.dat", "rb+")) == NULL)
	{
		puts("File could not be opened");
	}
	
	else
	{
		int c;
		//record with default information 
		struct customer record; //= {"", "", 0, "", 0};
		printf("enter the number of records: ");
		scanf("%d", &c);
		//entering information depending on the number of records
		for(int i=0;i<c;i++)
		{
			printf("%s","Enter Title, Artist and Year:\n ");
			fscanf(stdin, "%15s%d", record.title, record.artist, &record.year);
			
			printf("enter customer name and date: ");
			fscanf(stdin, "%15s%d", record.name, &record.date);
			
			//fseek(cfPtr, (record.title - 1) * sizeof(struct customer), SEEK_SET);
				
			//fwrite(&record, sizeof(struct customer), 1, cfPtr);
		}
		
		fclose(cfPtr);
	}
}