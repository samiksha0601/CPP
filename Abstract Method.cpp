
// Employee Payroll System with Abstract Classes:
// Problem Statement: Design an employee payroll system. Create an abstract class Employee with attributes like name and
// employee ID. Derive concrete classes like HourlyEmployee and SalariedEmployee. Define abstract methods for calculating 
// pay in the base class and implement them in the derived classes.
#include <iostream>
#include <string>
using namespace std;
// Abstract class Employee
class Employee {
protected:
    string name;
    int employeeID;

public:
    Employee()
   {
     name="no name";
     employeeID=0;
   } 
    
    Employee(string name, int employeeID)
    {
      this->name=name;
      this->employeeID=employeeID;
    }

    virtual void calculatePay()
    {

    }

   
};

// Derived class HourlyEmployee
class HourlyEmployee : public Employee {
protected:
    double hourlyRate;
    double hoursWorked;

public:
    HourlyEmployee()
    {
      hourlyRate=0;
      hoursWorked=0;  
    }
    
    HourlyEmployee(string name, int employeeID, double hourlyRate, double hoursWorked):Employee(name, employeeID)
        {
          this->hourlyRate=hourlyRate;
          this->hoursWorked=hoursWorked;  
        }

    void calculatePay() 
    {
         hourlyRate * hoursWorked;
         cout<<"name "<<name<<" employeeID "<<employeeID<<" salary "<<hourlyRate * hoursWorked<<endl;
    }
};


class SalariedEmployee : public Employee {
protected:
    double salary;

public:
    
    SalariedEmployee(string name, int employeeID, double salary):Employee(name, employeeID)
        {
          this->name=name;
          this->employeeID=employeeID;
          this->salary=salary;
        }
    
    void calculatePay() 
    {
    // salary;
        cout<<"name "<<name<<" employeeID "<<employeeID<<" salary "<<salary<<endl;
    }
};

int main() {
    
  
   HourlyEmployee h1("John Doe", 1001, 15.5, 40);
   h1.calculatePay();
  
    SalariedEmployee s1("Jane Smith", 1002, 5000);
     s1.calculatePay();
  


   

    return 0;
}
