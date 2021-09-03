#include <string>
#include <iostream>
using namespace std;

class Student {
public:
string name;
string address;
int rollNo;
Student(string n,string a,int rn){
    this->name=n;
    this->address=a;
    this->rollNo=rn;
}
};
/* If we remove & in below function, a new
 copy of the student object is created.
 We use const to avoid accidental updates
 in the function as the purpose of the function
 is to print s only*/
void print(const Student &s)
{
	cout << s.name << " " << s.address << " " << s.rollNo;
}
int main(){
Student rachell("rachell","london",456);
print(rachell);
}
