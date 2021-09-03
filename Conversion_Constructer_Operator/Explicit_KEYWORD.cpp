#include <iostream>
using namespace std;

/*
	If you try to run this code without commenting the line 24 , you are gonna get an error 
	because of the explicit keyword in line 16.
	Prefixing the explicit keyword to the constructor prevents the compiler from using
    that constructor for implicit conversions.You can still typecast primitive data types
    to the class "A" but you have to explicitly cast it.
*/

class A{
    int n;
    public:
    explicit A(int m=0):n(m){}
    void show(){cout<<n<<endl;}
    };
int main()
{
    
    A a(5);
    a.show();
    //a=21;
    ///a.show();
    a=A(24); 
    a.show();
    a=(A)32;
   a.show();
}
