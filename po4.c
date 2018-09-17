/*A charity has teamed up with a local business to raise funds. The business has agreed to
make a donation based on the number of sales on a particular day. For each full euro in
sales up to €5000, the charity will receive 5c per euro. For each full euro between €5000 and
€10000 in sales, the charity will receive 10c per euro. For each full euro in sales over €10000
the charity will receive 15c per euro. Write a C program that asks a user to input the amount
of sales and then calculates amount the charity will receive. A sample screen would look
like:
Input the amount of sales in euros: 5400.56
Amount for charity: 290 Euro*/

#include <stdio.h>
int main (void)
{
	//initialise donation and sales to 0
	double donation=0;
	double sales=0;
	//user input
	printf("Enter the amount of sales: ");
	scanf("%lf", &sales);
	//if sales is less than 5000, charity is sales*0.05
	if (sales<=5000)
	{
		donation = (sales * 0.05);
		printf("Amount of Charity: %2.lf Euro", donation);
	}
	//else if the sales is greater than 5000 and less than 10000, the charity is 10c per euro
	else if(sales>5000 && sales<=10000)
	{
		donation = (sales * 0.10) - 250;
		printf("\nAmount of Charity: %2.lf Euro", donation);
	}
	//or if the sales is greater than 10000, the charity is 15c per euro
	else if(sales>10000)
	{
		donation = (sales * 0.15) -1250;
		printf("\nAmount of Charity: %2.lf Euro", donation);
	}
	
	return 0;
}