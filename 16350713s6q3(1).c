/*You are a hipster and you have just opened a retro music record lending shop with a library
of thousands of records. Customers can borrow records from you. Write a sequence of C
Programs which will allow you to set up a system to record/catalogue the records that you
have in a file. It should be possible to record details such as Title, Artist and year but also
detail if the record has been borrowed and by which customer and when. One program
should provide functionality to update these details. Use Structs and Random Access Files
to achieve this*/


//part 1 of question 3
//creating a random-access file

#include<stdio.h>
//customer struct definition
struct customer
{
	char title[30]; //song title
	char artist[30]; //song artist
	unsigned int year; //year
	char customer[30]; //customer name
	unsigned int date; //date
};

int main (void)
{
	FILE *cfPtr;	//music.dat file pointer
	
	//opens the file, exits if cannot be opened
	if ((cfPtr = fopen("music.dat", "wb")) == NULL)
	{
		puts("File could not be opened");
	}
	
	else
	{
		//record with default information 
		struct customer data = {"", "", 0, "", 0};
		
		//output 50 blank record to file
		for(unsigned int i=1;i<=50;++i)
		{
			fwrite(&data, sizeof(struct customer), 1, cfPtr);
		}
		
		fclose (cfPtr);
	}
}