/*C program used to keep track of the number of people entering an Art Exhibition. This program has 4 functions, 
One which is called when a person enters the exhibition.
One which is called when a person leaves the exhibition.
The ticket costs €8. Another Function should keep a track of total amount of money that has been taken and print that to the screen. 
The final function should report the current number of people at the exhibition.*/

#include <stdio.h>
//function prototypes
int Enter();
int Leave();
int Money();
void PeopleLeft();

//global variables - used throughout the program
int in;
int out;

int main(void)
{
	//calling functions in main
	in = Enter();
	Money(in);
	out = Leave();
	PeopleLeft(in, out);
	
	return 0;
}
int Enter(int in)
{
	//user input
	printf("\nHow many people entered the exhibition? ");
	scanf("%d", &in);
	//returning the variable
	return in;
}
int Money(int in)
{
	//variable to keep track of the total money
	int TotalMoney;
	//total is equal to 8 by the number of people (€8 per person)
	TotalMoney = in * 8;
	printf("\nThe total amount of money that has been taken: %d Euro", TotalMoney);
}
int Leave(int out)
{
	//user input
	printf("\n\nEnter the number of people that left the exhibition: ");
	scanf("%d", &out);
	
	return out;
}
void PeopleLeft(int in, int out, int totalPeople)
{
	//total number of people = the number of people entered minus the ones that left
	totalPeople = in - out;
	printf("\nCurrent number of people at the exhibition: %d", totalPeople);
}


