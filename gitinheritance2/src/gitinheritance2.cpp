//============================================================================
// Name        : gitinheritance2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class number
{
protected:
	int num;

public:
	number()
	{
		num=0;
	}
	number(int n)
	{
		num=n;

	}
	virtual void print_it();


};
class binary:public number
{

public:
	binary():number()
	{

	}
	binary(int n):number(n)
	{

	}
	void print_it()
	{
		char bin[40];
		int i=0;
		while(num != 0)
		{
			bin[i]=num%2+48;
			num= num/2;
			i++;
		}
		for (int j = i - 1; j >= 0; j--)
		        cout << bin[j];

	}
};
class octal:public number
{

public:
	octal():number()
	{

	}
	octal(int n):number(n)
	{

	}
	void print_it()
	{
		char oct[40];
		int i=0;
		while(num != 0)
		{
			oct[i]=num%8;
			num= num/8;
			i++;
		}
		for (int j = i - 1; j >= 0; j--)
		        cout << oct[j];

	}
};
class hexadecimal:public number
{

public:
	hexadecimal():number()
	{

	}
	hexadecimal(int n):number(n)
	{

	}
	void print_it()
	{
		char hex[100];
		int i=0;
		while(num != 0)
		{
			int temp=0;
			temp=num%16;
			if(temp < 10)
			{
				hex[i]=temp+48;
				i++;
			}
			else
			{
				hex[i]=temp + 55;
				i++;
			}

			num= num/16;

		}
		for (int j = i - 1; j >= 0; j--)
		      cout << hex[j];

	}
};



int main() {

	number * ptr;
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	number p(n);
	binary b(n);
	octal o(n);
	hexadecimal h(n);

	cout<<"using base ptr";

	ptr=new binary();
	ptr->print_it();

	ptr=new octal();
	ptr->print_it();

	ptr=new hexadecimal();
	ptr->print_it();
		return 0;
}
