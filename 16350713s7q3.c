/*Write a C Program which contains a function with the following function prototype:
void myPrinter(const char *fmt, ...);
The function should print each argument (except the first argument) on a new line. The first
argument should indicate the types of the other arguments. For example, the function could
be called as follows:
myPrinter("ddcf", 5, 10, 'a', 5.5’);
which indicates the arguments are integer, integer character and float.*/

#include <stdio.h>
#include <stdarg.h>

void myPrinter(const char *fmt, ...);//prototype

int main(void)
{
	//declaring function
	myPrinter("ddcf", 5, 10, 'a', 5.5);
	
	return 0;
}	

void myPrinter(const char *fmt, ...)
{
	int i,j;
	
	//holds information needed by va_start
	va_list ap;
	//initialises  the object declared with va_list
	va_start(ap,*fmt);
	
	for(i=0; i<4; i++)
	{
		//if equal to d, print the number
		if(fmt[j]=='d')
		{
			printf("%d", va_arg(ap, int));
		}
		//if equal to c, print the word
		if(fmt[j]=='c')
		{
			printf("%c", va_arg(ap, int));
		}
		//if equal to f print the float
		if(fmt[j]=='f')
		{
			printf("%f", va_arg(ap, float));
		}
	}	

}