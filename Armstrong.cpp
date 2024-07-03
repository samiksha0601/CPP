#include<iostream>
using namespace std;

int main()
{
    int n;int sum=0;
    cout<<"Enter number "<<endl;
    cin>>n;
    int temp=n;
    while(n>0)
    {
        int rem=n%10;
        int sum=sum+(rem*rem*rem);
        int n=n/10;
    }
    if(temp==sum)
    cout<<"Number is Armstrong";
    else
    cout<<"Number is not Armstrong";
}