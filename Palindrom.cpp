#include<iostream>
using namespace std;
void palindrome();
int main()
{
    int n;
    cout<<"Enter the  number"<<endl;
    cin>>n;
    int sum=0;
    void palindrome()
    { 
      int a=n/10;
      int sum=n%10;
      sum=sum+palindrome();

    }
    cout<<sum<<endl;
    
}