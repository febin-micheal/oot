#include<iostream>
using namespace std;
class Palindrome
{
public:
	void check(int n)
	{
		int t=n;
		int rev=0;
		while(t>0)
		{
			int d=t%10;
			rev=rev*10+d;
			t=t/10;
		}
		if(n==rev)	cout<<n<<" is palindrome";
		else	cout<<n<<" is not palindrome";
	}
};
int main()
{
	Palindrome obj;
	int n;
	cout<<"enter number";
	cin>>n;
	obj.check(n);
	return 0;
}