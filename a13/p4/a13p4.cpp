/*
CH-230-A
a13p4.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

/*
[Error] request for member 'print' is ambiguous

In classes B and C, the inhertance should 
come by public virtual A

The error was caused by the fact that since D inherits the 
print() function from both B and C class, it doesn't know 
from which class to call it. 

Now the program prints 20. To print 10, just make C virtual.
*/

#include <iostream>
using namespace std;
 
class A {
  int x;
  public:
    void setX(int i) {
      x = i;
    }
    void print() { 
      cout << x << endl; 
    }
};


class B: virtual public A {
  public:
    B() { 
      setX(10); 
    }
};

class C: virtual public A  
{
  public:
    C() { 
      setX(20);
    }
};


class D: public B, public C {
};
 
int main()
{
  D d;
  d.print();
  return 0;
}
