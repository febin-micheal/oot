#include <iostream>
using namespace std;

class ElectricBill
{
	string name;
	int units;
	float surcharge,total;
public:
	ElectricBill(): total(50)
	{}
	// ~ElectricBill();
	
	void read()
	{
		cout<<"enter the name: ";
		getline(cin,name);
		cout<<"enter no. of units consumed: ";
		cin>>units;
	}	
	void display()
	{
		cout<<"\nName: "<<name<<"\nTotal: "<<total;
	}
	void rate()
	{
		if (units <= 100)
		{
			/* code */
			total += 0.6 * units;
		}
		else if (units > 100 && units <= 300)
		{
			/* code */
			total += (0.8 * (units - 100)) + (0.6 * 100);
		}
		else
		{
			/* code */
			total += (0.9 * (units - 300)) + (0.8 * 200) + (0.6 * 100);
		}
		if (total > 300)
		{
			/* code */
			surcharge = total * 0.15;
			total += surcharge;
		}
	}
};

int main()
{
	ElectricBill b1;
	b1.read();
	b1.rate();
	b1.display();
	cout<<"\n";
}