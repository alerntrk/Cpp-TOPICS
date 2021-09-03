/* this method the most common way to declearing 
 a template  friend function of a templated class.
 this is gonna  work well there is a problem.
 All template instantiations of class are friends with 
 all template instantiations of friend function.
*/
#include <iostream>
using namespace std;
 template<class T>
 class A
 {
   public:
     A(T a = 0): m(a) {}
 
     template<class U>
     friend A<U> foo(A<U>& a);
 
   private:
     T m;
 };
  A<double> secret_pi(3.14);

 template<class T>
 A<T> foo(A<T>& a)
 {
   cout << "Hacked! " << secret_pi.m << endl;
   return a;
 }

int main()
{
    A<char> c('q');
    c=foo(c);
    A<int> s=foo(s);
 
    
    return 0;
}
