//============================================================================
// Name        : gitinheritance1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
	string gender;

public:

	Person(string g)
	{

	gender=g;
	}
	virtual void getGender(string m)=0;
	virtual ~Person()
	{

	}
};
class Man:public Person
{
public:
	Man(string g):Person(g)
	{
		gender=g;
	}

	void getGender(string m)
	{
		if(m=="male")
		{
			cout<<"IN MAN CLASS";
		}
	}
};
class Woman:public Person
{
public:
	Woman(string g):Person(g)
	{
		gender=g;
	}
	 void getGender(string m)
	{
		if(m=="female")
		{
			cout<<"IN WOMAN CLASS"<<endl;
		}
	}
};

int main() {

Person* p=new Man("male");
//Man m;
//Woman w;

//p=&m;
p->getGender("male");

//p=&w;

p=new Woman("female");
	p->getGender("female");

	return 0;
}
