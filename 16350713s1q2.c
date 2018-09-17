#include <stdio.h>
int main (void)
{
	int bags;
	double totalcost;
	
	printf("enter the number of bags: ");
	scanf("%d", &bags);
	
	if (bags>=1 && bags<=10)
	{
		totalcost = bags*10;
	}
	
	else if (bags<=50)
	{
		
		totalcost =  9.50*(bags-10) + 100;
	}
	
	else if (bags>=50)
	{
		totalcost = 9.50*(bags-40) + 100;
		totalcost = 9*(bags-50) + 100 + 380;
	}
	
	printf("total cost:\t euro %2.f", totalcost);
	
	return 0;
}