#include <iostream>
using namespace std;

class Division
{
	int a,b;
	float c;
public:
	class TypeMismatch
	{

	};
	class DivisionByZero
	{

	};
	void read()
	{
		cout<<"enter the first integer: ";
		if(!(cin>>a))
			throw TypeMismatch();
		cout<<"enter the second integer: ";
		if(!(cin>>b))
			throw TypeMismatch();
		
	}
	void divide()
	{
		if(b==0)
			throw DivisionByZero();
		else
		{
			c=float(a)/float(b);
			cout<<c<<endl;
		}			
	}
};
int main()
{
	Division ob;
	try
	{
		ob.read();
		ob.divide();		
	}
	
	catch(Division::DivisionByZero)
	{
		cout<<"division by zero";
	}
	catch(Division::TypeMismatch)
	{
		cout<<"invalid input";
	}
	return 0;
}