#include <iostream>
#include <C:\Users\student\Desktop\Swarnim\DSA\Lab 1\linkedlist.h>

using namespace std;

class Stack{
    private:
        SinglyLinkedList list;
    
    public:
        bool isEmpty(){
            return list.isEmpty();
    }

        void push(int data){
            list.addToHead(data);
        }

        void pop(){
            list.removeFromHead();
        }

        int peek(){
            return list.peek();
        }

};

int main(){
    Stack stack;

    cout<<"Is stack empty?"<<stack.isEmpty()<<endl;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout<<"after pushing: "<<endl;
    cout<<stack.peek()<<endl;

    stack.pop();
    stack.pop();

    cout<<"after popping: "<<endl;
    cout<<stack.peek()<<endl;

    return 0;

}