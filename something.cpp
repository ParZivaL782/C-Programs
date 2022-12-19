#include<iostream>
using namespace  std;
class ep1
{
	public:
	int eno;
	string name,des;
	float bp,hra,da,pf,hp,np;
	
	void datainput()
	{
		cout<<"Enter the employee name:-";
		getline(cin,name);
		cout<<"Enter the employee's Desihgnation:-";
		getline(cin,des);
		cout<<"Enter the Pays:-\n ";
		cin>>hp>>bp>>hra>>da>>pf;
	}
	void calc()
	{
		np=bp+hra+da+pf+hp;
	}
	
};

class ep2:public ep1
{
	public:
	int sale;
	void getsales()
	{
		cout<<"Enter the Sales %";;
		cin>>sale;
	}
	void Display()
	{
		cout<<"The net worth for "<<des<<name<<" is "<<np<<endl;
		cout<<"Net worth after the Sales: "<<np+((np*sale)/100);
	}
};


int main()
{
	ep2 r;
	r.datainput();
	r.calc();
	r.getsales();
	r.Display();
	return 0;
}
