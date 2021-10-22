//for assigning a value to static variables 

#include <iostream>

using namespace std;
class A{
    public:
        static int x;
};
int A::x=11;
int main()
{
    
    A a;
    cout<<a.x;
    return 0;
}
