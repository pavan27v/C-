******************************************************************************
How a derived class inherits from a base class,
and how the derived object can use base class members direclty.

single inheritance 
one base class - defines reuseable members
one derived class - inherits and optionally extends base


class Dervied : AccessSpecifier Base
{
    
    
}

AccessSpecifier usually public for real world is-a relationships.


class Derived  : public Base
🟢 Public inheritance:
Base class public methods can be used inside the derived class,
and they remain accessible to the outside world (e.g., in main()).

That’s exactly how public inheritance works — the base’s public interface stays public.
This expresses an “is-a” relationship.

🔴 Private inheritance:
Base class public methods can be used inside the derived class,
but they are not exposed to the outside world (can’t be called from main()).

That’s precisely what private inheritance does —
it hides the base’s public interface from external code,
while still allowing internal reuse inside the derived class.


*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    public:
    void greet()
    {
        cout << " Hello from Base class " <<endl;
    }
    void identify()
    {
        cout<< "I am the Base Class" <<endl;
    }
    void baseonly()
    {
        cout << "Base only function" <<endl;
    }
    private :
    void secret()
    {
        
        cout<< "private secret Base "<<endl;
    }
    
};

// ___________________Derived class___________

 class Derived  : public Base{
   public :
   void Message()
   {
       cout <<"Hello from Derived class! "<<endl;
       greet();
   }
 };

int main()
{
    Derived d;  // create dderived object 
    /*d.greet();  // inherited from base
    d.identify(); //inherited from the base
    d.Message();  //from derived
    d.baseonly(); //
    d.secret() ;  //ompiler Error: private members are not inherited. */
  // d.greet();
   // d.Message(); 
    
    return 0;
}
