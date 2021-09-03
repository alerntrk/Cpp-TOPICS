/*
 This code solves the problem with previous approach.The friend function is declared as a template 
 function but not defined yet.Then, when  we define  class A , we make each template instantiation 
 of A friends with the corresponding template instantiation of fun().
 There is one more thing about this code.When we pass a int data to the fun() we get an error
 because C++ never considers implicit conversions for template parameter deduction on non-member 
 template functions(see 52nd line)
 So i just create a non-template friend function that is automatically created for each 
 template instantiation of class A.
*/
#include <iostream>
using namespace std;
template<class T>
 class A;
 template<class T>
 A<T> fun(A<T>& a);
 
 template<class T>
 class A
 {
   public:
     A(T a = 0): m(a) {}
     friend A<T> operator +(const A& obj1,const A<T>& obj2){
         return obj1.m+obj2.m;
     }
         
     friend A<T> fun<T>(A& a);
 
   private:
     T m;
 };
   A<double> secret_pi(3.14);

 template<class T>
 A<T> fun(A<T>& a)
 {
    // cout << "Hacked! " << secret_pi.m << endl; 
    /* if you above line you will get error*/

    cout<<"data is "<<a.m<<endl;
    return a; 
     
 }
int main()
{
    A<int> b(78);
    A<int> a(54);
    A<int> c=a+6;
    int i=8;
    //fun(i)
    a=b+a;
    a=fun(a);
    c=fun(c);


    return 0;
}
