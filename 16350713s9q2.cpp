#include <iostream>

using namespace std;
int main()
{
	//enter data from user
	cout << "Enter first number: ";
	int n1;
	cin >> n1; //store number into n1
	
	cout << "\nEnter second number: ";
	int n2;
	cin >> n2; //store number into n2
	
	cout << "\nEnter third number: ";
	int n3;
	cin >> n3; //store number into n3
	
	cout << "\nEnter fourth number: ";
	int n4;
	cin >> n4; //store number into n4
	
	cout << "\nEnter fifth number: ";
	int n5;
	cin >> n5; //store number into n5
	
	cout << "\nEnter sixth number: ";
	int n6;
	cin >> n6; //store number into n6
	
	double sum = n1 + n2 + n3 +n4 + n5 + n6; //add numbers
	double average = sum/6; //average of numbers

	cout << "\nThe Sum is: " << sum << endl;	//display sum
	cout << "\nThe Average is: " << average << endl;	//display average
	
	//if n1 is bigger than the other numbers, n1 is max
	if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6)
		cout << "\nThe Max is: " << n1;
	
	//if n2 is bigger than the other numbers, n2 is max
	if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n2>n6)
		cout << "\nThe Max is: " << n2;
	
	//if n3 is bigger than the other numbers, n3 is max
	if (n3>n2 && n3>n1 && n3>n4 && n3>n5 && n3>n6)
		cout << "\nThe Max is: " << n3;
	
	//if n4 is bigger than the other numbers, n4 is max
	if (n4>n2 && n4>n3 && n4>n1 && n4>n5 && n4>n6)
		cout << "\nThe Max is: " << n4;
	
	//if n5 is bigger than the other numbers, n5 is max
	if (n5>n2 && n5>n3 && n5>n4 && n5>n1 && n5>n6)
		cout << "\nThe Max is: " << n5;
	
	//if n6 is bigger than the other numbers, n6 is max
	if (n6>n2 && n6>n3 && n6>n4 && n6>n5 && n6>n1)
		cout << "\nThe Max is: " << n6;

	
}