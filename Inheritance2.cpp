// Employee Inheritance:
// Problem Statement: Build a system for managing employees. 
// Create a base class Employee with attributes such as name, employee ID, and salary. 
// Then, derive classes like Manager and Developer, each with its own attributes and methods.
//  Implement a common method, like calculate_salary(), in the base class.

#include<iostream>
using namespace std;
class Employee
{
    protected:string name;
          int empid;

    public:
       Employee()
       {
         name="Not known";
         empid=0;
        // day=00;
       }   
       Employee(string name,int empid)
       {
        this-> name= name;
        this->empid=empid;
       // this-> day= day;
   
       }
       virtual void Cal_sal()
       {
        //  int totalsal=1000;
        //  cout<<totalsal;
       }  

       void Display()
       {
        cout<<"name"<<name<<" "<<"empid"<<empid<<" ";
       } 
};
class Manager:public Employee
{
protected:int incentive,deptno,totalsal,day;
public:
  Manager()
  {
    totalsal=0;
    incentive=0;
    deptno=0;
  }
  Manager(string name,int empid,int day,int incentive,int deptno):Employee(name,empid)
  {
  
   this-> incentive= incentive;
   this->deptno=deptno;
   this->day=day;
 
  }
  int Cal_sal(int day)
  {
     totalsal=day*2000+incentive;
    
  }
  void Display()
       {
        cout<<"Details of Manager"<<endl; 
        cout<<"name "<<name<<" "<<" empid "<<empid<<" "<<" day "<<day<< " incentive "<<incentive<<" "<<" deptono "<<deptno<<" totalsal "<<totalsal<<endl;
       } 

};

class Developer:public Employee
{
    protected: string skills;
          int totalsal,day;
    public:
    Developer()
    {
      skills="C,C++";
    }
    Developer(string name,int empid,int day,string skills):Employee(name,empid)
    {
        this->skills=skills;
        this->day=day;
    }
    void Cal_sal(int day)
    {
       totalsal=day*1500;
    
    }
     void Display( )
     {
       cout<<"Details of Developer"<<endl; 
       cout<<"name: "<<name<<" "<<" empid: "<<empid<<" "<<" day "<<day<<" skills: "<<skills<<" totalsal: "<<totalsal<<endl;
      } 
    
};

int main()
{
   // Employee e1;
   //e1.Cal_sal(30);
  Manager m1("Sam",10,30,100,25);
  m1.Cal_sal(30);
  m1.Display();

  Developer d1("Sam",10 ,30,"c++");
  d1.Cal_sal(30);
  d1.Display();
   
  
   
}