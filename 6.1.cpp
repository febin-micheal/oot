#include <iostream>
using namespace std;

class Swap
{
	int t;
public:
	void swap_value(int a,int b)
	{
		t=a;
		a=b;
		b=t;
		cout<<"\ninside function\na="<<a<<"\nb="<<b;
	}
	void swap_address(int *a,int *b)
	{
		t=*a;
		*a=*b;
		*b=t;
		cout<<"\ninside function\na="<<*a<<"\nb="<<*b;
	}	
	void swap_reference(int &a,int &b)
	{
		t=a;
		a=b;
		b=t;
		cout<<"\ninside function\na="<<a<<"\nb="<<b;
	}

};

int main()
{
	int c,d,a,b,ch,y;
	Swap ob;
	cout<<"a=";
	cin>>c;
	cout<<"b=";
	cin>>d;
	do
	{
		a=c;
		b=d;
		cout<<"\nMENU\n1.call by value\n2.call by reference\n3.call by address";
		cout<<"\nchoice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:	ob.swap_value(a,b);
					break;
			case 2:	ob.swap_reference(a,b);
					break;
			case 3: ob.swap_address(&a,&b);
					break;
			default: cout<<"invalid choice";
		}
		cout<<"\noutside function\na="<<a<<"\nb="<<b;
		cout<<"\ndo you like to continue (1/0)?: ";
		cin>>y;
	}
	while(y==1);
	return 0;
}