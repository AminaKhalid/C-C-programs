/*Using the person struct given below, write a C Program which prompts the user to complete
the fields in the struct for 6 students. The program should then print out a list of the structs
sorted numerically by gpa to rank the students. 
struct person {
unsigned int studentNum;
 char lastName[15];
 char firstName[10];
char fiedOfStudy[50];
 int age;
 char sex; // 'm' or 'f'
double gpa;
};
NOTE: To make it efficient the program must use an array of pointers to structs. For this
question, you may use strcmp (string compare) function from the C library
(#include<string.h>) in your sorting function.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person 
{
	unsigned int studentNum;
	char lastName[15];
	char firstName[10];
	char fiedOfStudy[50];
	int age;
	char sex[50]; // 'm' or 'f'
	float gpa;
	
} *ptr[50];

int main (void)
{
	int i;
	
	struct person student[50];
	for(i=0; i<=2; i++)
	{
		ptr[i] = (struct person *)malloc (sizeof(struct person));
		
		printf("\nEnter student number:  ");
		scanf("%d", &ptr[i] -> studentNum);
		printf("\nenter last name:  ");
		scanf("%s", ptr[i] -> lastName);
		printf("\nenter first name:  ");
		scanf("%s", ptr[i] -> firstName);
		printf("\nenter field of study:  ");
		scanf("%s", ptr[i] -> fiedOfStudy);
		printf("\nenter age:  ");
		scanf("%d", &ptr[i] -> age);
		printf("\nenter sex:  ");
		scanf("%s", ptr[i] -> sex);
		printf("\nenter GPA:  ");
		scanf("%f", &ptr[i] -> gpa);
	
	}
	
	printf("student details:\n ");
	
	for(i=0; i<=2; i++)
	{
		printf("\n%d", ptr[i]-> studentNum);
		printf("\nlast name: %s", ptr[i] -> lastName);
		printf("\nfirst name: %s", ptr[i] -> firstName);
		printf("\nfield of study: %s", ptr[i] -> fiedOfStudy);
		printf("\nage: %d ",  ptr[i] -> age);
		printf("\nsex: %s ", ptr[i] -> sex);
		printf("\nGPA: %f", ptr[i] -> gpa);
	}
	


return 0;	
}
