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
		if(exp>10)
		{
			cout<<"\nEmployee name: "<<name<<"\nExperience: "<<exp<<"\nSalary: "<<salary<<"\nDepartment name: "<<dept_name;
		}
	}
};

int main()
{
	int n;
	cout<<"enter no. of employees: ";
	cin>>n;
	Senior emp[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		emp[i].read();
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		emp[i].display();
	}	
	return 0;
}