#include<iostream>
using namespace std;
class Fibonacci
{
public:
	void display(int n)
	{
		int a=0;
		int b=1;
		cout<<a<<" "<<b<<" ";
		for(int i=0;i<n;i++)
		{
			int c=a+b;
			cout<<c<<" ";
			a=b;
			b=c;
		}
	}
};
int main()
{
	Fibonacci obj;
	int n;
	cout<<"number of terms";
	cin>>n;
	obj.display(n);
	return 0;
}