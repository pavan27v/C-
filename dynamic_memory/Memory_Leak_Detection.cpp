#include<stdint.h>
#include<iostream>
using namespace std;

void no_leak()
{
   int32_t *ptr = new int32_t(5);
    *ptr = 20;
    cout<<"*ptr = "<< *ptr <<endl;
    delete(ptr);
    ptr = nullptr;
  
}

void simple_leak()
{
    int32_t *ptr = new int32_t(5);

    cout<<*ptr<<endl;

}
void  array_leak()
{
    int32_t *ptr = new int32_t[10];

	for(int i = 0; i<10; ++i)
	{
	   ptr[i] = i;
	}
	//cout << "Array leak created with 10 integers" << endl;
//        delete [] ptr ;

}

int main()
{
    //no_leak();
    
    //simple_leak();

    /*******************************************************************
     * To check the memory leaks 
     * use : g++ -g -o leak_demo Memory_Leak_Detection.cpp
     *        valgrind --leak-check=full ./leak_demo
     *
     *
==102618== LEAK SUMMARY:
==102618==    definitely lost: 4 bytes in 1 blocks
==102618==    indirectly lost: 0 bytes in 0 blocks
==102618==      possibly lost: 0 bytes in 0 blocks
==102618==    still reachable: 0 bytes in 0 blocks
==102618==         suppressed: 0 bytes in 0 blocks
     *
    * **************************************************************/
  array_leak();

/*******************************************************************
 *
 *
 *==110763==    by 0x1092D3: array_leak() (Memory_Leak_Detection.cpp:24)
==110763==    by 0x10933E: main (Memory_Leak_Detection.cpp:54)
==110763== 
==110763== LEAK SUMMARY:
==110763==    definitely lost: 40 bytes in 1 blocks
==110763==    indirectly lost: 0 bytes in 0 blocks
==110763==      possibly lost: 0 bytes in 0 blocks
==110763==    still reachable: 0 bytes in 0 blocks
==110763==         suppressed: 0 bytes in 0 blocks
 *
 *
 * **************************************************************/


}
