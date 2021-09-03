#include <iostream>
using namespace std;
void fun(){
 static int n=0;   
 n++;
 cout<<n<<endl;
}
int main(){
    
    fun();
    fun();
    fun();
    
}
