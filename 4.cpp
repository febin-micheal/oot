#include <iostream>
using namespace std;

class Student
{
	int usn,m1,m2,m3;
	float average;
	char name[20];
public:
	// Student();
	// ~Student();
	void getdata()
	{
		cout<<"enter usn: ";
		cin>>usn;
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter marks in 3 tests of subject: ";
		cin>>m1>>m2>>m3;
	}
	void getaverage()
	{
		if (m1 > m2 && m2 > m3)	average = (m1 + m2)/2;
		else if (m1 > m2 && m3 > m2)	average = (m1 + m3)/2;
		else	average = (m2 + m3)/2;
	}
	void display()
	{
		cout<<"\\nUSN: "<<usn<<"\nName: "<<name<<"\nAverage mark: "<<average;
	}
};

int main()
{
	Student s[10];
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		s[i].getdata();
		s[i].getaverage();
	}
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		s[i].display();
	}
	return 0;
}