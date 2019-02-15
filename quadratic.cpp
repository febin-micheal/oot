#include<iostream>
#include<cmath>
using namespace std;
class Quadratic
{
	int d,r1,r2,real,img,r;
public:
	void root(int a,int b,int c)
	{
		d=b*b-4*a*c;
		if(d>0)
		{
			cout<<"real and distinct";
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			cout<<"\nroot1= "<<r1;
			cout<<"\nroot2= "<<r2;			
		}
		if(d<0)
		{
			cout<<"imaginary";
			real=-b/(2*a);
			img=sqrt(d*-1)/(2*a);
			cout<<"\nroot1= "<<real<<"+i"<<img;
			cout<<"\nroot2= "<<real<<"-i"<<img;
		}
		else
		{
			cout<<"equal root";
			r=(-b)/(2*a);
			cout<<"\nroot= "<<r;
		}
	}	
};
int main()
{
	Quadratic obj;
	int a,b,c;
	cout<<"enter a,b,c";
	cin>>a>>b>>c;
	obj.root(a,b,c);
	return 0;
}