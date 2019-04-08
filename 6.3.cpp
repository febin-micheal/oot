#include <iostream>
using namespace std;

class Employee
{
public:
	int id,age,exp;
	char name[20],des[20];
	float bpay;
	void read()
	{
		cout<<"id:	";
		cin>>id;
		cout<<"name:	";
		cin>>name;
		cout<<"age:	";
		cin>>age;
		cout<<"experience:	";
		cin>>exp;
		cout<<"designation:	";
		cin>>des;
		cout<<"basicpay:	";
		cin>>bpay;
		}	
};

class OtherIncome: public virtual Employee
{
public:
	float income;
	char source[20];
	void read1()
	{
		cout<<"Income:	";
		cin>>income;
		cout<<"Source:	";
		cin>>source;
	}
};

class Increment: public virtual Employee
{
public:
	int incr;
	void calcIncrement()
	{
		if(exp>25)	incr=5000;
		else	incr=2000;
	}	
};

class NetSalary: public OtherIncome,public Increment 
{
public:
	float totSal;
	void calcNetSalary()
	{
		totSal=bpay+income+incr;
	}
	void display()
	{
		cout<<"\nEmployee Details:\n";
		cout<<"ID:"<<id;
		cout<<"\nName:"<<name;
		cout<<"\nAge:"<<age;
		cout<<"\nBasic Pay:"<<bpay;
		cout<<"\nDesignation:"<<des;
		cout<<"\nExperience:"<<exp;
		cout<<"\nTotal Salary:"<<totSal;
	}

};

int main()
{
	NetSalary ob;
	ob.read();
	ob.read1();
	ob.calcIncrement();
	ob.calcNetSalary();
	ob.display();
}