#include<iostream>
using namespace std;
int main()
{
    int n;
   cout<<"Enter number"<<endl;
    cin>>n;

    int fact=1;
    for(int i=n;i!=0;i--)
    {
        fact=i*fact;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
 }