#include <iostream>
#include <math.h>

using namespace std;

//function prototype that specifies default arguments
int area(int num1 = 100, int num2 = 100, int num3 = 100);
int main()
{
	//store length from user into num1
	cout << "\nEnter length of first side: ";
	int num1;
	cin >> num1;
	
	//store length from user into num2
	cout << "\nEnter length of second side: ";
	int num2;
	cin >> num2;
	
	//store length from user into num3
	cout << "\nEnter length of third side: ";
	int num3;
	cin >> num3;
	
	//if the any of the numbers are greater than 100, use default values
	if(num1>100||num2>100||num3>100)
	{
		cout << "result using default values: " << area() << endl;
	}
	else
	{
		//else calculate the area as normal
		cout << "result: " << area(num1, num2, num3) <<endl;
	}
}
int area(int num1, int num2, int num3)
{
	
	int sp; //semi perimeter
	sp = (num1 + num1 + num3) / 2; //formula for semi perimeter
	
	int result;
	result =  sqrt (sp*(sp-num1)*(sp-num2)*(sp-num3)); //formula for area
	
	//cout << "cp is: " << sp << endl;
	//cout << "area is: " << result <<endl;
	
	//return result
	return result;
}