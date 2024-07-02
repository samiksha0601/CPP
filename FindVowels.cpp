#include<iostream>
using namespace std;
int main()
{
    char ch;
   cout<<"Enter lowercase character"<<endl;
    cin>>ch;

    if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
    cout<<ch<<" character is vowels"<<endl;
    else
     cout<<ch<<" character is consonent"<<endl;
}