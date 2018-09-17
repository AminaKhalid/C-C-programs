#include <stdio.h>
int main (void)
{
	int a, b, c; //declaring the integer values
	float average;
	
	printf("enter the first height: ");
	scanf("%d", &a);
	
	printf("enter the second height: ");
	scanf("%d", &b);
	
	printf("enter the third height: ");
	scanf("%d", &c);
	
	//average formula
	average = (a + b + c)/3.0;
	
	printf ("average is: %.3f\n", average);
	
	//if a is bigger than the other two, print a (the number) is the tallest
	if (a>=b && a>=c)
	{
		printf ("tallest is %d\n", a);
	}
	//if b is bigger than the other two, print b (the number) is the tallest
	else if (b>=a && b>=c)
	{
		printf ("tallest is %d\n", b);
	}
	//if c is bigger than the other two, print c (the number) is the tallest
	else if (c>=a && c>=b)
	{
		printf ("tallest is %d\n", c);
	}
	//if a is smaller than the other two, print a (the number) is the shortest
	if (a<=b && a<=c)
	{
		printf ("shortest is %d\n", a);
	}
	//if b is smaller than the other two, print b (the number) is the shortest
	else if (b<=a && b<=c)
	{
		printf ("shortest is %d\n", b);
	}
	//if c is smaller than the other two, print c (the number) is the shortest
	else if (c<=a && c<=b)
	{
		printf ("shortest is %d\n", c);
	}
	return 0;
	
}