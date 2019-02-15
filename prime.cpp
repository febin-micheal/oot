#include<iostream>
using namespace std;
class Prime
{
	int s,l,n,i,flag;
public:
	void display(int a,int b)
	{
		if(a<b)
		{
			s=a;
			l=b;
		}
		else
		{
			s=b;
			l=a;
		}
		for(n=s;n<l;n++)
		{
			flag=0;
			for(i=2;i<n;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)	cout<<n<<" ";
		}
	}
};
int main()
{
	Prime obj;
	int a,b;
	cout<<"enter lower and upper limit";
	cin>>a>>b;
	obj.display(a,b);
	return 0;
}