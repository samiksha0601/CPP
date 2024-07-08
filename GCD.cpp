/* Accept two numbers and calculate GCD of them.*/

#include<iostream>
using namespace std;
int main()
{
    
     int n1,n2,i;
    cout<<"enter two number\n";
    cin>>n1>>n2;
    int temp;int hcf;
 
 if(n2>n1)
{
  temp=n2;
  n2=n1;
  n1=temp;
}
    for (i=1;(i<=n1 && i<=n2);i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            // n1=n1/i;
            // n2=n2/i;
             //cout<<i;
             hcf=i;

        }
        
    }
    cout<<"The GCD of given no."<<endl;
            cout<<hcf;
}
