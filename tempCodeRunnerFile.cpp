#include <iostream> 

using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:\n";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
    return 0;
}