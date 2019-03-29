#include <iostream>
using namespace std;
class Employee
{
	int empCode;
	char empName[20];
public:
	// Employee();
	// ~Employee();
	void getdata()
	{
		cout<<"enter Employee code: ";
		cin>>empCode;
		cout<<"enter Employee name: ";
		cin>>empName;
	}
	void display()
	{
		cout<<"\n\nEmployee code: "<<empCode<<"\nEmployee name: "<<empName;

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
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		emp[i].display();
	}

}