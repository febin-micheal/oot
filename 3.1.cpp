#include <iostream>
using namespace std;

class Complex
{
	int real,img;
public:
	// Complex();
	// ~Complex();

	void read()
	{
		cout<<"enter real part: ";
		cin>>real;
		cout<<"enter imaginary part: ";
		cin>>img;
	}
	void display()
	{
		cout<<"\n"<<real<<"+i"<<img;
	}	
	Complex operator +(Complex z)
	{
		Complex temp;
		temp.real = real + z.real;
		temp.img = img + z.img;
		return temp;
	}
};

int main()
{
	Complex c1,c2,c3;
	c1.read();
	c2.read();
	c1.display();
	c2.display();

	c3 = c1 + c2;
	c3.display();
	return 0;
}