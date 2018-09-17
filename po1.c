/*The UN state children are defined as living in over-crowded dwellings when there is a ratio
of more than two people per room (excluding bathrooms but including kitchen and living
room). The over-crowding ratio is obtained by dividing the total number of household
members by the total number of rooms occupied by the household. Thus, a dwelling with
two bedrooms, a kitchen and sitting-room would be defined as over-crowded if there were
more than eight people living in it. Write a C program that calculates if a child is living in an
over-crowded dwelling based on user input from the keyboard. The program should output
an indication if the child lives in an over-crowded dwelling or not.*/

#include<stdio.h>
int main (void)
{
	int members;	//number of people in the room
	int rooms;	//number of rooms
	double overcrowding;	//rate of over-crowding
	
	//user input
	printf("Enter the number of rooms in the household: ");
	scanf("%d", &rooms);
	
	printf("Enter the number of people in the household: ");
	scanf("%d", &members);
	
	//over-crowding equals to the number of people divided by the number of rooms
	overcrowding = members/rooms;
	
	//if over-crowding rate is greater than 2 then the child lives in an over-crowded dwelling
	if (overcrowding>2.0)
	{
		printf("The child lives in an over-crowded dwelling");
	}
	//else the child doesn't live in an over-crowded dwelling;
	else
	{
		printf("The child does not live in an over-crowded dwelling");
	}
	
return 0;
}