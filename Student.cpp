#include <iostream>
#include <fstream>
using namespace std;

class Student
{
	int id,roll,m1,m2,m3;
	char name[20];
public:
	void putdata()
	{
		cout<<"\n\nname: "<<name
		<<"\nid: "<<id
		<<"\nroll: "<<roll
		<<"\nsubject 1: "<<m1
		<<"\nsubject 2: "<<m2
		<<"\nsubject 3: "<<m3;
	}
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
	ofstream obj1("stud.txt",ios::out);
	char op;
	do
	{
		s.getdata();
		obj1.write((char*)&s,sizeof(s));
		cout<<"more records Y/n";
		cin>>op;
	}
	while(op=='y');
	obj1.close();

	ifstream obj2("stud.txt",ios::in);
	obj2.read((char*)&s,sizeof(s));
	while(!obj2.eof())
	{
		s.putdata();
		obj2.read((char*)&s,sizeof(s));
	}
	obj2.close();
}