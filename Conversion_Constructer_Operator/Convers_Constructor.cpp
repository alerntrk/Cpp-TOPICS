#include <iostream>
#include <vector>
using namespace std;
/*
  If a class has a constructor which can be called with a single parameter,
  then this constructor becomes conversion constructor because such a constructor
  allows automatic conversion to the class to be constructed.
  In line 28 ,there is implicit conversion unless you create object without parameter
  the you get an error 
  However In line 29 and 30 we have explicit conversion even if i create obeject with no 
  parameter ,it will work.
   
  */
class A{
    int n;
    public:
        A(int m=0):n(m){}
        void disp(){cout<<n<<endl;}
        void operator=(const A& rhs){
            cout<<"Do nothing..."<<endl;
            
        } 
};

int main(){
    A a(5);
    a.disp();
    a=55;
    a.disp();
    a=A(5);
    a.disp();
    a=(A)5;
    a.disp();
    }
