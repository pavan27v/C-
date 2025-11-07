/******************************************************************************

// public method of the base class is accessed by dervid public  inheritence   and outside world
// public method of the base class is accessed by dervid private inheritence   but not able to accessed by outside world with derived object
// public method of the base class is accessed by dervid protected inheritence but not able to outside world with dervied object 

*******************************************************************************/
#include <iostream>
using namespace std;
class Base
{
    public:
   void greet() { cout << "Hello from the Base" <<endl; }
    
};
//_____________________public inheritence _________________________

class derivedPublic : public Base
{
    public:
    void hi() { greet(); } 
};

class derivedprotected : protected Base
{
    public :
    void hi()
    {
        greet(); 
    }
};
class derivedprivate : private Base
{
    public :
    void hi()
    {
        greet(); 
    }
};

int main()
{
    
   /* derivedPublic pub;
    pub.hi();
    pub.greet(); */

   
   //* derivedprivate pri;
    derivedprivate pri;
    pri.hi(); 
    //pri.greet() // void Base::greet()’ is inaccessible within this context
    
   //* derivedprotected pro;
    derivedprotected pro;
    pro.hi(); 
    //pro.greet();  // error: ‘Base’ is not an accessible base of ‘derivedprotected’
    
    


    return 0;
}

