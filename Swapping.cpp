#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
   cout<<"Enter two numbers"<<endl;
    cin>>n1;
    cin>>n2;

    int temp=n1;
    n1=n2;
    n2=temp;
    cout<<"swapped numbers ";
    cout<<"n1 = "<<n1<<" n2 = "<<n2;
}