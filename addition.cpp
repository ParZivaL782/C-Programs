#include <iostream>
using namespace std;

int add(int a,int b)
{
	return (a+b);
}
int add(int a,int b,int c)
{
	return (a+b+c);
}
int add(int a,int b,int c,int d)
{
	return (a+b+c+d);
}
int add(int a,int b,int c,int d,int e)
{
	return (a+b+c+d+e);
}
int main()
{
	cout<<add(2,4)<<endl;
	cout<<add(4,2,764)<<endl;
	cout<<add(3,65,23,32)<<endl;
	cout<<add(34,32,3,23,12)<<endl;
	
	return 0;
}
