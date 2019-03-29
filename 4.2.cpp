#include <iostream>
using namespace std;

class Account
{
public:
	string cust_name,acc_type;
	int acc_no,balance,d,w;
	// Account();
	// ~Account();
	void read()
	{
		cout<<"enter customer name: ";
		getline(cin,cust_name);
		cout<<"enter account no: ";
		cin>>acc_no;
		cout<<"enter account type: ";
		getline(cin,acc_type);
	}

};
class Cur_acct: public Account
{
public:
	// Cur_acct();
	// ~Cur_acct();
	void deposit()
	{
		cout<<"enter amount to deposit: ";
		cin>>d;
		balance +=d;
	}
	void withdraw()
	{
		cout<<"enter amount to withdraw: ";
		cin>>w;
		if(balance >= w)
		{
			cout<<"Transaction successfull\n";
			balance -=w;
		}
		else
			cout<<"Insufficient balance, Transaction failed\n";
	}
	void display()
	{
		cout<<"Name: "<<name<<"\nBalance: "<<balance;
	}
};
class Sav_acct: public Account
{
public:
	// Sav_acct();
	// ~Sav_acct();
	void deposit1()
	{
		cout<<"enter amount to deposit: ";
		cin>>d;
		balance +=d;
	}
	void withdraw1()
	{
		cout<<"enter amount to withdraw: ";
		cin>>w;
		if(balance >= w)
		{
			cout<<"Transaction successfull\n";
			balance -=w;
		}
		else
			cout<<"Insufficient balance, Transaction failed\n";
	}
	void display1()
	{
		cout<<"Name: "<<name<<"\nBalance: "<<balance;
	}
};