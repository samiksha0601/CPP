#include<iostream>
using namespace std;

int main()
{
    int a,b,ch;
    do{
    cout<<"Enter two integers"<<endl;
    cin>>a>>b;
    cout<<"Enter the choice as below";
    cout<<" \n1: Addtition \n 2:Subtraction \n 3: Multiplication\n 4:Division "<<endl;
     cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;

        case 2:
      cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;

        case 3:
       cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;

        case 4:
       cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
    }
    
}while(ch!=0);
}