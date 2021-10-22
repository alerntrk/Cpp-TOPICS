// namespace
#include<iostream>
using namespace std;

namespace ns{
    void fun(){
        cout<<"helloWorld!";
    }
}
//using namespace ns;
int main()
{
    ns::fun();
	return 0;
}
