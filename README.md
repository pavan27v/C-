Constructor / destructor
A constructor is a special member function of a class that is automatically called when an object is created.
Its main job is to initialize the object.
1. Same name as the class
  Constructor name must match the class name
  It has no return type, not even void
  class MyClass {
  public:
    MyClass() { }  // Constructor
 };
2. Called automatically when object is created
    MyClass obj;  // Constructor is called
3. Types of constructors
    Type   


https://meet.google.com/oag-jzkp-sxs





                             |   Description                                             |
| ------------------------------------- | --------------------------------------------------------- |
| Default                               | No parameters                                             |
| Parameterized                         | Takes arguments                                           |
| Copy constructor                      | Initializes object from another object                    |
| Move constructor                      | For moving resources (C++11+)                             |
| Delegating constructor                | Calls another constructor of the same class               |
| Constructor with initializer list     | Used to initialize const, reference, or complex types     |

4. Overloading is allowed
You can define multiple constructors with different parameter lists.
class A {
public:
    A() {}
    A(int x) {}
    A(string s) {}
};
5. Constructor initializer list
Used to:
Initialize const members
Initialize reference members
Improve performance

6. Copy constructor
Called when:
An object is copied
Passed by value
Returned by value
A(const A &obj);

7. Compiler provides default constructor
If no constructor is written, the compiler provides a default one.

8. Can be made explicit
  To prevent implicit conversions.
  explicit A(int x);  // prevents: A obj = 5;
9. Cannot be virtual
Constructors cannot be virtual.
10. Can’t return anything
  Constructors do not have a return type — not even void.
11. constructors are used to create the temporary objects 
12. Destructors are its opposite
While constructors initialize, destructors clean up
 ~MyClass();  // Destructor



\\
