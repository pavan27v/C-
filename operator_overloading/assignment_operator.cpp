#include<stdint.h>
#include<iostream>
using namespace std;
class tmp 
{
    public :
    int32_t value ;
    
    public :
      tmp(int32_t value = 0) : value(value) {}
      
      tmp &operator=(const tmp &others)
      {
          
          // others.value =
           this->value = others.value;
           return *this;
      }
      void print()
      {
          cout<<"value = "<<value<<endl;
      }
};


int main()
{
     tmp t1(9), t2, t3;
     //t1.print();
     //t2 = t1;
    // t3 = t1;
     // t2 = t3 = t1;
    // t2.print();
    // t3.print();

    (t2 = t1).print();  
    
   /* since it is in bracket  it git more priority (t2 = t1)
    when evaluating (t2 = t1) ==> it returns the refence to t2 
    
    upon t2's refence .print() is called */
    
    // (t2 = t1).value = 100;
    
    //t2.print();  // Should print: value = 100
    /* making value public it is possible to evalue this statment */
    
    return 0;
}
