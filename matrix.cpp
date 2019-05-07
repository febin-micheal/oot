#include <iostream>
using namespace std;

class Matrix
{
public:
	int a[100][100],m,n,i,j;
	void read()
	{
		cout<<"enter rows and columns: ";
		cin>>m>>n;
		cout<<"enter the elements: ";
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
				cin>>a[i][j];
		}
	}
	void operator+(Matrix z)
	{
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
				a[i][j] += z.a[i][j];
		}
	}
	void display()
	{
		cout<<"\n";
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
				cout<<a[i][j]<<"\t";
			cout<<"\n";
		}	
	}
};

int main()
{
	Matrix m1,m2,m3;
	m1.read();
	m1.display();
	m2.read();
	m2.display();
	m1 + m2;
	m1.display();
	return 0;
}