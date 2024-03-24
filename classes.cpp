
#include <iostream>
#include <string>

using namespace std;


struct student
{
	string name;
	int age;
	float percentage;
};

int main()
{
	student one;
	one.name = "shahrukh";
	one.age = 27;
	one.percentage = 98;

	student two;
	two.name = "hiren";
	two.age = 21;
	//two.percentage = 99;

	cout << "The student : " << one.name << " is " << one.age << " years old and has secured " << one.percentage << " % in semister 1" << endl;
	cout << "The student : " << two.name << " is " << two.age << " years old and has secured " << two.percentage << " % in semister 1" << endl;
	return(0);
}

