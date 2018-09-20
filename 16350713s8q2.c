/*Using the structures below, write a C Program which can fill and initialise the structures with
user data (entered via keyboard) for 5 students and then print out the first name, sur name,
parent’s first name parents sur name and the parent’s phone number for each of the 5
student records.
struct parent{
 char *firstName;
 char *lastName;
 unsigned int phone_number;
};
struct student{
 char *firstName;
 char *lastName;
 struct parent aParent;
}; */


#include <stdio.h>

//struct declaration
struct parent
{
 char firstName[30]; //array to store firstName
 char lastName[30];	//array to store lastName
 unsigned int phone_number; //phone number
};
struct student
{
 char firstName[30];
 char lastName[30];
 struct parent aParent;
};

int main(void)
{
	int i;
	//declaring an array of structs
	struct student info[5];
	
	for(i=0; i<5; i++) // for loop to enter 5 details
	{
		printf("\nenter student fist name: ");		//storing user (student) information into array of structs
		scanf("%s", info[i].aParent.firstName);
		
		printf("\nenter student surname: ");
		scanf("%s", info[i].aParent.lastName);
		
		printf("\nenter parent's first name: ");	//storing user(parent) information into array of structs
		scanf("%s", info[i].aParent.firstName);		
		
		printf("\nenter parent's surname: ");
		scanf("%s", info[i].aParent.lastName);
		
		printf("\nenter parent's phone number: ");
		scanf("%u", &info[i].aParent.phone_number);
	}
	
	for(i=0; i<5; i++)	//loop through the details
	{
		printf("\n%d- student name: %s", i+1, info[i].firstName);	//incremeting student and parent by 1 after 1st student/parent entry
		printf("\n%d- student lastname: %s",i+1, info[i].lastName);		//print the information 
		printf("\n%d- parent's name: %s",i+1, info[i].aParent.firstName);
		printf("\n%d- parent's lastname: %s",i+1, info[i].aParent.lastName);
		printf("\n%d- parent's phone number: %u",i+1, info[i].aParent.phone_number);
	
	}
	return 0;
}