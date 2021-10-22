//to acces a global variable when there is a local variable with the same name

#include <iostream>

using namespace std;
int x=8;

int main()
{
    int x=7;
    cout<<x<<endl;
    cout<<::x;
    return 0;
}
