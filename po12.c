#include <stdio.h>

int main(void)
{
	int address;
	int *ptr;
	ptr = &address;
	int *ptr1;
	ptr1 = ptr + 1;
	
	double address2;
	double *pd;
	pd = &address2;
	double *pd1;
	pd1 = pd + 1;
	
	long double address3;
	long double *pf;
	pf = &address3;
	long double *pf1;
	pf1 = pf + 1;
	
	printf("%d	after addition = %d\n", ptr, ptr1);
	printf("%d	after addition = %d\n", pd, pd1);
	printf("%d	after addition = %d\n", pf, pf1);

	return 0;
}