#include <iostream>
using namespace std;

class Polygon
{
public:
	int a,b;
	// Polygon();
	// ~Polygon();
	void read()
	{
		cout<<"enter the dimensions: ";
		cin>>a>>b;
	}
};
class Triangle: public Polygon
{
	int ar;	
public:
	// Triangle();
	// ~Triangle();
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
	// Rectangle();
	// ~Rectangle();
	void area1()
	{
		ar = a * b;
		cout<<"area: "<<ar;
	}
};
int main()
{
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
					t.area();
					break;
			case 2:	r.read();
					r.area1();
					break;
			default:	cout<<"invalid choice";
		}
		cout<<"\ndo you want to continue (1/0)?: ";
		cin>>x;
	}
	while(x==1);
	return 0;
}