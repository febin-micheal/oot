#include<iostream>
using namespace std;
class odd
{
public:
	void check(int x)
	{
		if(x%2==0)	cout<<"even";
		else	cout<<"odd";
	}
	
};

int main()
{
	int x;
	odd obj;
	cout<<"enter number";
	cin>>x;
	obj.check(x);
	return 0;
}