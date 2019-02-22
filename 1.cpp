#include <iostream>
using namespace std;
class BankAccount
{
	char name[100],acctype[100];
	int accno,balance,d,w;
public:
	// BankAccount();
	// ~BankAccount();
	void assign()
	{
		cout<<"enter the account no: ";
		cin>>accno;
		cout<<"enter the name: ";
		cin>>name;
		cout<<"\nenter balance amount: ";
		cin>>balance;
	}
	void deposit()
	{
		cout<<"enter amount to deposit: ";
		cin>>d;
		balance+=d;
	}
	void withdraw()
	{
		cout<<"enter amount to withdraw: ";
		cin>>w;
		if(balance>=w)
		{
			cout<<"Transaction Successful\n";
			balance-=w;
		}
		else	cout<<"Insufficient balance, Transaction Failed\n";
	}
	void display()
	{
		cout<<"Name: "<<name<<"\nBalance: "<<balance;
	}
	
};

int main()
{
	BankAccount acc1;
	acc1.assign();
	acc1.deposit();
	acc1.withdraw();
	acc1.display();
	return 0;
}