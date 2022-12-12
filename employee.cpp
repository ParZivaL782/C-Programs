#include <iostream>
using namespace std;
class Employee
{
	public:
	string Ename;
	int Eid,salary;
	void input()
	{
		cout<<"Enter the ID:";
		cin>>Eid;
		cout<<"Enter the Name:";
		cin>>Ename;
		cout<<"Enter the Salary:";
		cin>>salary;
	}
	void Display()
	{
		cout<<"ID:"<<Eid<<endl;
		cout<<"Name:"<<Ename<<endl;
		cout<<"Salary:"<<salary<<endl;
	}
};

	void Display_Highest(Employee E1,Employee E2,Employee E3)
	{
	if((E1.salary>E2.salary) && (E1.salary>E3.salary))
		{
			cout<<"Highest Salary:";
			E1.Display();
		}
	else if((E2.salary>E1.salary) && (E2.salary>E3.salary))
		{
			cout<<"Highest Salary:\n";
			E2.Display();
		}
	else
		{
			cout<<"Highest Salary:";
			E3.Display();
		}
	}
		
	void Display_Sorted(Employee E1,Employee E2,Employee E3)
	{
		if(E1.Eid>E2.Eid && E2.Eid>E3.Eid)
		{
			E1.Display();
			E2.Display();
			E3.Display();
		}
		else if(E1.Eid<E2.Eid && E1.Eid>E3.Eid)
		{
			E2.Display();
			E1.Display();
			E3.Display();
		}
		else
		{
			E3.Display();
			E2.Display();
			E1.Display();
		}
	}

int main()
{
	Employee E1;
	Employee E2;
	Employee E3;
	E1.input();
	E2.input();
	E3.input();
	Display_Highest(E1,E2,E3);
	Display_Sorted(E1,E2,E3);
	return 0;
}
