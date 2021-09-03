#include <iostream>
using namespace std;
/*
    ! Syntax is "operator conversion-type-id"
    ! Whenever i call just class name ,i get an value which is type of conversion-type-id
*/
    
class A{
    int n;
    public:
    explicit  A(int m=0):n(m){}
    void show(){cout<<n<<endl;}
    operator int(){
        return n;
    }
    };
int main()
{
    int n;
    A a;
    a=A(21);
    n=a;
    cout<<a<<endl;
    cout<<n;
}
