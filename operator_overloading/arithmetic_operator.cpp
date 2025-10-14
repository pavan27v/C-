#include <iostream>
#include <stdint.h>
using namespace std;

class arithmetic 
{
    int32_t num1;
    int32_t num2;
    
    
    public :
    arithmetic(int val1 = 0, int val2 = 0) : num1(val1), num2(val2) {}
    
    
    
    arithmetic operator+( const arithmetic &others)
    {
        arithmetic temp;
        
         temp.num1 = this->num1 + others.num1;
         temp.num2 = this->num2 + others.num2;
         
         return temp;
        
    }
    arithmetic operator-( const arithmetic &others)
    {
    
         
    return arithmetic(this->num1 - others.num1, this->num2 - others.num2);
         
         
         
       //this->num1 - others.num1  = say 5
        //this->num2 - others.num2 = say 10
      /*arithmetic __temp(5, 10);  // Internally created, __temp is not in the code
      return __temp;  */
        
    }
    
    arithmetic operator*(const arithmetic &others)
    {
    
        
        return arithmetic(this->num1 * others.num1, this->num2 * others.num2);
        
    }

  friend arithmetic operator/(const arithmetic &other1, const arithmetic &other2);
    
    
    void disp()
    {
       // cout<<"sum ="<< num1 + num2 <<endl;
       cout<<" num1 = "<<num1 <<" num2 = "<<num2<<endl; 
    }
    
};
    
    arithmetic operator/(const arithmetic &others1, const arithmetic &others2)
    {
    
        
        return arithmetic(others1.num1 / others2.num1, others1.num2 / others2.num2);
        
    }


int main()
{
    
    arithmetic obj1(10, 20), obj2(2, 2), obj3;
    
    // obj3 = arithmetic(10,20);

    
      //obj3 = obj1 + obj2;
     //obj3 = obj1.operator+(obj2);
     
     //obj3 = obj2 + obj1;
     //obj3 = obj2.operator+(obj1)
     
      //obj2 = obj3 + obj1;
     // obj2 = obj3.operator+(obj1);
     
     
      // obj3 = obj1 - obj2;
     // obj3 = obj1.operator-(obj2);
    
    
      //obj3 = obj1 * obj2 ;
     // obj3 = obj1.operator*(obj2);
      
      
      obj3 = obj1 / obj2 ;
     // obj3 = obj1.operator/(obj2);
    
    
    
   // obj1.disp();
    //obj2.disp();

    obj3.disp();


    return 0;
}
