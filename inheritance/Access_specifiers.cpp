/******************************************************************************

Access Specifiers and Visibility Rules.

how members are seen by derived classes and by the outside world.

how public, protected, and private control access to class members — and 
how they behave under different inheritance types.


correct me if im wrong
base class with public, private and protected members

derived class with public inheritence :
can only access the public and protected members of the base class
can not access the private members of base class
and outside world(main)
only public members of the base class can be accessed 
private and protected members of the base class can not be accessed..

what happens
derived class with private inheritence :
derived class with protected inheritence :

*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
  public:
  int pub = 1;
  protected:
  int pro = 2;
  private :
  int pri = 3;
  
  public:
  void show()
  {
      cout << "Base::pub" << pub <<endl;
      cout << "Base::pro" << pro <<endl;
      cout << "Base::pri" << pri <<endl;
  }
};

//---------Derived class --------------------
class Derived : public Base {
    
 public :
 void accessMembers()
 {
    cout<<"Inside derived :\n";
    cout <<"pub = "<< pub <<endl;
    cout <<"pro = "<<pro << endl;
    //cout <<"pri = "<<pri << endl; // error: ‘int Base::pri’ is private within this context
 }
};
int main()
{
  Derived d;
  
  cout << "Accesing through object :\n";
  cout << "d.pub = "<< d.pub << endl;
//  cout << "d.pro = "<< d.pro << endl; //error: ‘int Base::pro’ is protected within this context
 // cout << "d.pri = "<< d.pri << endl; // error: ‘int Base::pri’ is private within this context
 // d.accessMembers();
    
    
}
