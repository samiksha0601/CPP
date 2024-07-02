#include<iostream>
using namespace std;
int main()
{
    int B_sal;
    cout<<"Enter Basic Salary"<<endl;
    cin>>B_sal;

if(B_sal<150000)
cout<<"Tax=0"<<endl;
else{
    if(B_sal>150000 || B_sal<300000)
    {
        int Tax=(B_sal*0.2);
        cout<<"Tax="<<Tax<<endl;
    }
    else
    {
      if(B_sal>300000)
      {
        int Tax=(B_sal*0.3);
        cout<<"Tax="<<Tax<<endl;
      }
    }
}

}