#include <iostream>
using namespace std;

class Student
{
public:
	int rollno;
	// Student();
	// ~Student();
	void read()
	{
		cout<<"enter rollno: ";
		cin>>rollno;
	}

};
class Test: public virtual Student
{
public:
	int m1,m2;
	// Test();
	// ~Test();
	void read1()
	{
		cout<<"enter marks of 2 subjects: ";
		cin>>m1>>m2;
	}
	
};
class Sports: public virtual Student
{
public:
	int w;
	// Sports();
	// ~Sports();
	void read2()
	{
		cout<<"enter score in sports: ";
		cin>>w;
	}
	
};
class Result: public Test, public Sports
{
public:
	float sum;
	// Result();
	// ~Result();
	void display()
	{
		sum = m1 + m2 + w;
		cout<<"Result: "<<sum;
	}
	
};
int main()
{
	Result s;
	s.read();
	s.read1();
	s.read2();
	s.display();
	return 0;
}