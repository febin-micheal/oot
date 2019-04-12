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
};
int main()
{
	Student s;
	ifstream obj("stud.txt",ios::in);
	obj.read((char*)&s,sizeof(s));
	while(!obj.eof())
	{
		s.putdata();
		obj.read((char*)&s,sizeof(s));
	}
	obj.close();
}