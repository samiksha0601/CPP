// Write a program to print following pattern.
// *
// * *
// * * *
// * * * *
// * * * * *
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<=i;j++)
       {
        cout<<" * ";
        
       }
      cout<<"\n";
        
    }
      
}
