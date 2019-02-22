#include <iostream>
using namespace std;

class Employee
{
	int empNum;
	float basicSalary,grossSalary,da,it,netSalary;
	char empName[20];
public:
	// Employee();
	// ~Employee();
	void getdata()
	{
		cout<<"enter Employee no: ";
		cin>>empNum;
		cout<<"enter Employee name: ";
		cin>>empName;
		cout<<"enter Basic salary: ";
		cin>>basicSalary;
	}
	void compute()
	{
		da = basicSalary * 0.52;
		grossSalary = basicSalary + da;
		it = grossSalary * 0.32;
		netSalary = grossSalary + it;
	}
	void display()
	{
		cout<<"\n\nEmployee no: "<<empNum<<"\nEmployee name: "<<empName<<"\nNet salary: "<<netSalary;	
	}

};

int main()
{
	int n;
	cout<<"enter no. of employees: ";
	cin>>n;
	Employee emp[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		emp[i].getdata();
		emp[i].compute();
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		emp[i].display();
	}

	return 0;
}