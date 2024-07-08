// Create a class Person with data members as name, age, city. Write getters and setters for all the data 
// members. Also add the display function. Create Default and Parameterized constructors. Create the 
// object of this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class person
{
    private: string name,city;
             int age;
    public:
    person()
    {
        cout<<"Default Constructor"<<endl;
    }
    person(string name,string city,int age)
    {
       this->name=name;
       this->city=city;
       this->age=age;
    }

    string setname(string name)
    {
     this->name=name;
     return name;
    }
    string getname()
    {
     return name;
    }

   string getcity()
    {
      return city;
    }
    string setcity(string a)
    {
        this->city=a;
    }

   string setage(int age)
   {
    this->age=age;
    //return age;
   }
   int getage()
   {
    return age;
   }


    void display()
    {
       cout<<"name:"<<name<<endl<<"city: "<<city<<endl<<"age: "<<age<<endl;
    }

};
int main()
{

 person p1("sam","Digras",21);
 p1.display();
 p1.setname("parth");
 p1.getname();

 p1.setcity("yavt");
 p1.getcity();

 p1.setage(15);
 p1.getage();

 p1.display();
 return 0;
}