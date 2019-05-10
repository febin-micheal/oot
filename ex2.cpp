#include<iostream>
using namespace std;

class avg
{
	public:
	int m1,m2,m3,m4;
	float avg;
	void read()
	{
	cout<<"enter the marks:";
	cin>>m1>>m2>>m3>>m4;

	}

	void cal()
	{
	avg=(m1+m2+m3+m4)/4;
	if(m1>100||m2>100||m3>100||m4>100)
	{
	throw(avg);

	}
	else
	{
	cout<<"average is:"<<avg;
	}
	}


};


int main()
{
	avg a;
	try
	{
	a.read();
	a.cal();
	}
catch(float avg)
{
	cout<<"exception";
}
}
