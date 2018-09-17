/*The Towers of Hanoi*** is a classic problem which can be solved using recursion. Write a C
program which demonstrates the problem being solved by printing out the sequence of
moves required to move all discs from the source tower to the destination tower.
*** https://en.wikipedia.org/wiki/Tower_of_Hanoi*/

#include <stdio.h>

void move(int disks, char x, char z, char y);	//function prototype

int main(void)
{
	int disks;
	
	printf("********************TOWER OF HANOI********************");
	//user input
	printf("\n\nEnter the number of disks: ");
	scanf ("%d", &disks);
	
	//calling function in main
	move(disks, 'A', 'C', 'B');

	return 0;
}
void move(int disks, char x, char z, char y)
{
	//if there is only 1 disk, move it from x to z
	if (disks==1)
	{
		printf("Move disk 1 from %c to %c\n", x, z);
		return;
	}
	move(disks-1, x,y,z);
	printf("Move disk %d from %c to %c\n",disks, x, z);
	move(disks-1,y,z,x);
}