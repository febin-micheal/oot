#include <iostream>
#include <fstream>
using namespace std;

class Student
{
	int id,roll,m1,m2,m3;
	char name[20];
public:
	void getdata()
	{
		cout<<"name: ";
		cin>>name;
		cout<<"id: ";
		cin>>id;
		cout<<"roll: ";
		cin>>roll;
		cout<<"marks of 3 subjects: ";
		cin>>m1>>m2>>m3;
	}
};
int main()
{
	Student s;
	ofstream obj("stud.txt");
	char op;
	do
	{
		s.getdata();
		obj.write((char*)&s,sizeof(s));
		cout<<"more records Y/n";
		cin>>op;
	}
	while(op=='y');
	obj.close();
}