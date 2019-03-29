#include <iostream>
using namespace std;

class Employee
{
protected:
	char name[20];
	int exp;
	float salary;

};

class Department: public Employee
{
public:
	char dept_name[20];
	void read()
	{
		cout<<"Employee name: ";
		cin>>name;
		cout<<"Experience: ";
		cin>>exp;
		cout<<"Salary: ";
		cin>>salary;
		cout<<"Department name: ";
		cin>>dept_name;
	}
};

class Senior: public Department
{
public:
	void display()
	{
		
	}
};

int main()
{
	Senior emp[5];
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		emp[i].read();
	}
}