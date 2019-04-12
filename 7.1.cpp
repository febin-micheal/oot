#include <iostream>
using namespace std;

class Polygon
{
public:
	int a,b;
	void read()
	{
		cout<<"enter the dimensions: ";
		cin>>a>>b;
	}
	virtual void area()
	{
		cout<<"area of polygon";
	}
};
class Triangle: public Polygon
{
	int ar;	
public:
	void area()
	{
		ar = 0.5 * a * b;
		cout<<"area: "<<ar;
	}
	
};
class Rectangle: public Polygon
{	
	int ar;
public:
	void area()
	{
		ar = a * b;
		cout<<"area: "<<ar;
	}
};
int main()
{
	Polygon *p;
	Triangle t;
	Rectangle r;
	int c,x;
	do
	{
		cout<<"MENU\n1.Triangle\n2.Rectangle\nchoice: ";
		cin>>c;
		switch(c)
		{
			case 1:	t.read();
					p = &t;
					break;
			case 2:	r.read();
					p = &r;
					break;
			default:	cout<<"invalid choice";
		}
		p -> area();
		cout<<"\ndo you want to continue (1/0)?: ";
		cin>>x;
	}
	while(x==1);
	return 0;
}