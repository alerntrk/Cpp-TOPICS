//to define functions outside of class

#include <iostream>

using namespace std;
class A{
    public:
        void fun();
};
void A::fun(){cout<<"hello"<<endl;}
int main()
{
    
    A a;
    a.fun();
    return 0;
}
