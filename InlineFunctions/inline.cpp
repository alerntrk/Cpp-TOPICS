#include <iostream>

using namespace std;
class operations{
    
    int a,b,add,sub;
    public:
    void get();
    void sum();
    void diff();
    };
inline void operations::get(){cout<<"enter 2 nums"<<endl;cin>>a>>b;}
inline void operations::sum(){add=a+b;}
inline void operations::diff(){sub=a-b;cout<<sub<<endl;}
int main()
{
    operations x;
    x.get();
    x.sum();
    x.diff();

    return 0;
}
