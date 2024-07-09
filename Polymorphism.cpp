// Problem Statement: Build a library catalog system. Create a base class LibraryItem with properties like title and author.
// Then, derive classes like Book and Journal, each with their unique properties. Implement methods to check out and 
// return items in the derived classes. 
#include<iostream>
using namespace std;
class Library
{
    protected :string title,author;
    public:
       Library()
       {
        title="not known";
        author="No Author";

       }
       Library(string title,string author)
       {
         this->title=title;
         this->author=author;
       }
     virtual void issueing()
       {

       }
       void display()
       {
        cout<<"Author: "<<author<<" title: "<<title<<endl;
       }
};
class Book:public Library
{
  private:
     int Bid;
     string Btype;
  public:
     Book()
     {
        Bid=00;
        Btype="not given";
     }   
     Book(string title,string author,int Bid,string Btype): Library(title,author)
     {
        this->Bid=Bid;
        this->Btype=Btype;
     }
     void issueing()
     {
         cout<<"Book is issueed"<<endl;
     }
     void display()
     {
    cout<<"Author: "<<author<<" title: "<<title<<" Bid: "<<Bid<<" Btype "<<Btype<<endl;
     }

};
class journel:public Library
{
private:
 string Jtype;
 public:
  journel()
  {
    Jtype="not mention";

  }
   journel(string title,string author,string Jtype): Library(title,author)
  {
    this->Jtype=Jtype;
    
  }
  void issueing()
  {
    cout<<"journel is issueed"<<endl;
  }
  void display()
  {
   cout<<"Author: "<<author<<" title: "<<title<<" jtype "<<Jtype<<endl;
  }
};
int main()
{
  string title,author;
//  Library l1("abc","sam");
//  l1.display();
 Book b1("abc","sam",10,"study");
 b1.display();
 b1.issueing();
 journel j1("abc","sam","Doc");
 j1.issueing();
 j1.display();
}