#include <iostream>
using namespace std;

//---------Base class ----------------------
class Base 
{
    public:
    int pub = 1;
    protected:
    int pro = 3;
    private :
    int pri = 3;
    
    public:
    void showBase()
    {
        
        cout << "Base :: pub = "<< pub << "Base :: pro"<<pro <<"Base :: pri" << pri <<endl;
        
    }
};
    //-------leve2------------
    class Mid : protected Base 
    {
        public:
        void accessmid()
        {
            cout <<"Inside mid : pub="<< pub << "pro="<<pro <<endl;
            //cout << "can not access private ="<<pri <<endl;
        }
    };
    class Derived : public Mid 
    {
        public:
        void accessDerived()
        {
         cout << "Inside derived : pub=" << pub << "pro="<<pro <<endl; 
          //cout << "can not access private ="<<pri <<endl;
        }
    }; 

int main()
{
    Derived d;
    d.accessmid();
    d.accessDerived();
    //d.pub = 12;
    return 0;
}
