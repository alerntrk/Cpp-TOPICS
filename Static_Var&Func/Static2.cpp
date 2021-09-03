#include <iostream>
using namespace std;
class A{
    public:
    static int n;
  
    
};
int A::n;// allocate static variable from memory
int main(){
     
    A a,b;
    a.n=8;
    b.n=9;
    cout<<a.n<<endl;
}
