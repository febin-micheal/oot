#include <iostream>
#include <stdlib.h>
using namespace std;

class MinMax
{
	int max,min;
public:
	void find_Max(int a[],int n)
	{
		max=a[0];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			if (a[i]>max)
			{
				/* code */
				max=a[i];
			}
		}
	}	
	void find_Min(int a[],int n)
	{
		min=a[0];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			if (a[i]<min)
			{
				/* code */
				min=a[i];
			}
		}

	}
	void display()
	{
		cout<<"\nMax element="<<max<<"\nMin element="<<min;
	}
};

int main()
{
	MinMax *pt;
	int a[100],n;
	cout<<"enter array size: ";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		a[i]=rand()%100;
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<a[i]<<"\t";
	}
	pt->find_Max(a,n);
	pt->find_Min(a,n);
	pt->display();
	return 0;
}