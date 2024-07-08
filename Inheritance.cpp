// Shape Hierarchy:
// Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then 
// create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area
//  and perimeter specific to its geometry.

#include<iostream>
using namespace std;
class shape
{
private: 
public:
    int area()
   {
      return 0;  
   }
   int parimeter()
   {
      return 0;
   }
   
};
class rectangle:public shape
{
   private:int a,l,b,perimeter;
   public:
      rectangle()
      {
         a=1;
         perimeter=1;
      }
      rectangle(int l,int b)
      {
         this->l=l;
         this->b=b;
      }
      int area()
       {

          a=l*b;
        
       }
      int parimeter()
      {
        perimeter=(l+b)*2;
      }
   
    void display()
    {
    cout<<"Area of rectangle "<<a<<endl;
    cout<<"Perimeter of rectangle "<<perimeter<<endl;    
    }

     
};
class circle:public shape
{
 private: int rad,a;
 protected: int p;
  public:
    circle()
    {
      rad=0;
    }
   circle(int rad)
   {
      this->rad=rad;
   }
   int area()
    { 
        a=3.14*rad*rad;
    }
   int parimeter()
    {
      p=2*3.14*rad;
    }
   
    void display()
    {
    cout<<"Area of circle "<<a<<endl;
    cout<<"Perimeter of circle "<<p<<endl;
    }
};

class triangle:public shape
{
 private: int l,h,b,perimeter;
 protected:int a;
  public:
    triangle()
    {
     a=1;
     perimeter=1;
    }
   //  triangle(int l,int h)
   //  {
   //       this->l=l;
   //       this->h=h;
   //  }

  triangle(int l,int h,int b)
    {
         this->l=l;
         this->h=h;
         this->b=b;
    }
     int area()
    {
       a=(l*h)/2; 
    }
   int parimeter()
   {
      perimeter=l+b+h;
   }
   
    void display()
    {
    cout<<"Area of triangle "<<a<<endl;
    cout<<"Perimeter of triangle "<<perimeter<<endl;
    }
};

int main()
{
   //rectangle rect()
    rectangle rect(10,20);
    rect.area();
    rect.parimeter();
    rect.display();

    circle c1(10);
    c1.area();
    c1.parimeter();
    c1.display();

    triangle t1(10,20,2);
    t1.area();
    //triangle t2(10,20,15);
    t1.parimeter();
    t1.display();


}