/**************************************
 *
 *
 * singal object allocation
 *
 * *********************************/

#include<iostream>
#include<stdint.h>
using namespace std;
class student
   {
      string name ;
      public:
      student(string n): name(n) { cout<<"created"<<endl;  }
      ~student() {cout<<"destroyed"<<endl;}
      void disp()
      {
              cout<<name<<endl;
      }
   };

int main()
{
  // signal object allocation
   //int *ptr = new int(5);
   //cout<< *ptr << endl;

  // Array allocation
   //int32_t *arr = new int32_t[5]{1,2,3,4,5};
   //int32_t arr1[5] = {1,2,3,4,5};
   //for(int32_t &x : arr)
   //cout<<x<<endl;
    /*  int i = 0;
     for(i = 0; i<4; ++i){
	     cout<<arr[i]<<endl;
     }
     delete[]arr; */
  
    //object allocation
   student* ptr = new student("ABCsji");
   ptr->disp();
   cout<<"ptr = "<<ptr<<endl;
   



}
