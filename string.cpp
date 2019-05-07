#include <iostream>
using namespace std;

#include <string.h>

class String
{
public:
	char s[20];
	string st;
	int i;

	void read()
	{
		cout<<"\nenter string: ";
		getline(cin,st);
		for (i = 0; st[i] != '\0'; ++i)
			s[i] = st[i];
		s[i] = '\0';
	}
	bool operator ==(String temp)
	{
		return (strcmp(s,temp.s));
	}
	void display()
	{
		cout<<"\n"<<s;
	}
};

int main()
{
	String s1,s2;
	s1.read();
	s1.display();
	s2.read();
	s2.display();
	if(s1 == s2)
		cout<<"\nunequal strings";
	else
		cout<<"\nequal strings";
	return 0;
}