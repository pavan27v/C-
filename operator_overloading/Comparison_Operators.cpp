/***********************************************************************
 * Comparison operator 
 *  ==  != > < 
 *
 *
 * *********************************************************************/
  #include<stdint.h>
  #include <iostream>
using namespace std;
class student
{
   string name;
   int32_t id;

   public :
   student(string n, int32_t id) : name(n), id(id) {}

   bool operator==(const student & others)
    {
        //comapre both 
        // just to check 
        this->id = 13;
        return((name == others.name && id == others.id));


    }

};



class point
{
   int32_t x;
   int32_t y;

    public :
      point(int32_t x, int32_t y) : x(x) , y(y) {}

      bool operator==(const point &others)
        {
		 return ( this->x == others.x && this->y == others.y);

        }
};
int main()
{
   point obj1(12,13), obj2(12, 93);
    if( obj1 == obj2)
    {
	 cout<<"Both objexts are equal"<<endl;   
    }
    else
    {
	    cout<<" Not equal" <<endl;
    } 

    //student s1("ABC", 12) , s2("ABC" , 12);
    //student s1("ABC", 12) , s2("AdC" , 12);
    student s1("AdC", 23) , s2("AdC" , 13);
    if(s1 == s2)
    {
      cout<<"same"<<endl;  
    }
    else
    {
      cout<<"not same"<<endl;
    }

}






