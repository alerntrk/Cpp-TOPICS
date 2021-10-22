// Nested Classes
#include<iostream>
using namespace std;

class out
{
public:
	int w;
	class in
	{
	public:
	        
			int x;
			static int q;
			int foo();

	};
};
int out::in::q = 15;

int main(){
	out A;
	cout<<out::in::q;
	out::in E;
    
}
