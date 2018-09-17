/*If program logic and operations are identical for different data types, function templates can
be efficient and convenient.
Write a C++ Program which has a function template which takes two arguments/variables
and swaps them. The template should work for integers, doubles and chars. Also
demonstrate how to call the template in your program for the different argument types.
(Hint: function must use pass by reference).*/

#include <iostream>
using namespace std;

template <class T>
void Swap(T &i, T &j)
{
	T temp;
	temp = i;
	i = j;
	j = temp;
}
int main()
{
	int intA = 1;
	int intB = 2;
	
	double doubleA = 2.55;
	double doubleB = 8.55;
	
	char charA = 'x';
	char charB = 'y';
	
	cout <<"Before Swapping the values: \n\n";
	cout << "intA = " << intA << "\nintB = " << intB;
	cout << "\ncharA = " << charA << "\ncharB = " << charB;
	cout << "\ndoubleA = " << doubleA << "\ndoubleB = " << doubleB;
	
	//calling the function for different argument types
	Swap(intA, intB);
	Swap(doubleA, doubleB);
	Swap(charA, charB);
	
	cout << "\n\nAfter swapping the values: \n\n";
	cout << "intA = " << intA << "\nintB = " << intB;
	cout << "\ncharA = " << charA << "\ncharB = " << charB;
	cout << "\ndoubleA = " << doubleA << "\ndoubleB = " << doubleB;
	
	return 0;
}