/*
Hint
    if you try to run this code without & operator in declearetion of operator 
    overloading , you get an error because stream objects must be passes
    to functions as reference.
*/
#include <iostream>
using namespace std;
template <class T>
class A{
    T data;
    public:
    A(T a=0):data(a){}
    friend ostream& operator <<(ostream& os,A& a){
         os << a.data;
        return os;
        }
    
};
int main()
{
  A<int> obj(54);
  cout << obj;
    return 0;
}
