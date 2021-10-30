#include <iostream>
void int2anybase(int n,int base){
 if(n>base-1)
    int2anybase(n/base,base);
 std::cout<<n%base;
 }
int main()
{
    int2anybase(16,16);
    return 0;
}
