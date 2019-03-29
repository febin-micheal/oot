#include <iostream>
using namespace std;
#include <cmath>

class Triangle
{
	float ar,s;
public:
	void area(int a,int b)
	{
		ar=0.5*a*b;
	}

	void area(int a)
	{
		ar=sqrt(3)/4*a*a;
	}

	void area(int a,int b,int c)
	{
		s=(a+b+c)/2;
		ar=sqrt(s*(s-a)*(s-b)*(s-c));
	}

	void display()
	{
		cout<<"Area: "<<ar;
	}
};

int main()
{
	Triangle t;
	int ch,a,b,c,y;
	do
	{
		cout<<"Area of\n1.right angle triangle\n2.equilateral triangle\n3.scalene triangle\nchoice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Base: ";
					cin>>a;
					cout<<"Height: ";
					cin>>b;
					t.area(a,b);
					break;
			case 2: cout<<"Side: ";
					cin>>a;
					t.area(a);
					break;
			case 3: cout<<"a= ";
					cin>>a;
					cout<<"b= ";
					cin>>b;
					cout<<"c= ";
					cin>>c;
					t.area(a,b,c);
					break;
			default: cout<<"\ninvalid choice";
		}
		t.display();
		cout<<"\nDo you want to continue:";
		cin>>y;
	}
	while(y==1);
	return 0;
}