#include <string>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int *p=&n;//single pointer 
    int**dp=&p;//double pointer
    int ***tp=&dp;//triple pointer
    cout<<"p is "<<p<<" dp is "<<dp<<" tp is"<<tp<<endl;
    int &r=n;
    int &rr=r;
    int &rrr=rr;
    cout<<"r is "<<r<<" rr is "<<rr<<" rrr is"<<rrr;

}
