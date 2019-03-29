#include <iostream>
using namespace std;

class Side
{
protected:
	int a;
public:
	void read()
	{
		cout<<"enter the number: ";
		cin>>a;
	}	
};

class Square: public Side
{
	int b;
public:
	void display()
	{
		b=a*a;
		cout<<"\n"<<a<<"^2= "<<b;
	}	
};

class Cube: public Side
{
	int c;
public:
	void display1()
	{
		c=a*a*a;
		cout<<"\n"<<a<<"^3= "<<c;		
	}
};

int main()
{
	Square s;
	Cube c;
	s.read();
	s.display();
	c.read();
	c.display1();

	return 0;
}