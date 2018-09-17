#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		void setName(string name)
		{
			Name = name;
		}
		string getName() const
		{
			return Name;
		}
		
		void setAge(int age)
		{
			Age = age;
		}
		int getAge() const
		{
			return Age;
		}
		
		void setHeight(int height)
		{
			Height = height;
		}
		int getHeight() const
		{
			return Height;
		}
		
		void setWeight(double weight)
		{
			Weight = weight;
		}
		double getWeight() const
		{
			return Weight;
		}
	
	private:
		string Name;
		int Age;
		int Height;
		double Weight;
};

int main()
{
	string PersonName;
	int PersonAge;
	int PersonHeight;
	double PersonWeight;
	
	Person person1;
	cout << "Enter your name: ";
	getline(std::cin, PersonName);
	person1.setName (PersonName);
	
	cout <<"Enter Age: " <<endl;
	cin >> PersonAge;
	person1.setAge(PersonAge);
	
	cout <<"Enter Height (in cm): " <<endl;
	cin >> PersonHeight;
	person1.setHeight (PersonHeight);
	
	cout <<"Enter Weight (in kg): " <<endl;
	cin >> PersonWeight;
	person1.setWeight (PersonWeight);
	
	cout << "Name: " <<person1.getName() << endl;
	cout << "Age: " <<person1.getAge() << endl;
	cout << "Height: " <<person1.getHeight() << endl;
	cout << "Weight: " <<person1.getWeight() << endl;
	
	
	return 0;
}