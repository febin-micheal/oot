#include <iostream>
using namespace std;
class BankAccount
{
	char name[20],acctype[20];
	int accno,balance,d,w;
public:
	// BankAccount();
	// ~BankAccount();
	void assign()
	{
		cout<<"enter the account no: ";
		cin>>accno;
		cout<<"enter the account type: ";
		cin>>acctype;
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
	int x,ch;
	BankAccount acc1;
	acc1.assign();

	do
	{
		cout<<"MENU\n1.deposit\n2.withdraw\n3.display\nenter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:	acc1.deposit();
					break;
			case 2:	acc1.withdraw();
					break;
			case 3:	acc1.display();
					break;
			default:	cout<<"invalid choice";		
		}
		cout<<"\ndo you want to continue (1/0)?: ";
		cin>>x;
	}
	while(x==1);
	
	
	return 0;
}