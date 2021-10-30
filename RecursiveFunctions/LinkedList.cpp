/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
template <class T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(const T data=T(),Node<T>* next=NULL): data(data),next(next){}
    };
Node<int>* root=NULL;
template<class T>
void print(Node<T>* begin){
    if(begin) {std::cout<<begin->data<<"  ";
    print<T>(begin->next);
    }
    }
template<class T>
Node<T>* addtoEnd(const T& data,Node<T>* begin)
{
    if(begin){
        begin->next=addtoEnd(data,begin->next);
    }
    else return new Node<T>(data);
}


int main(){
    root=new Node<int>(5);
    addtoEnd(11,root);

    print(root);
    return 0;

}
