#include<iostream>
using namespace std;

class Node{
    private:
        
        
    public:
    int data;
    Node *next;
    Node(int value){data=value; next=NULL;}
    ~Node();
};

void addToHead(Node* &HEAD, int value){
    Node *temp = new Node(value);
    temp->next = HEAD;
    HEAD = temp;
}

void addToTail(Node* &TAIL, int value){
    Node *temp = new Node(value);
    TAIL->next = temp;
    TAIL = temp;
}

void displayHead(Node* &HEAD){
    Node *temp = HEAD;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void displayTail(Node* &TAIL){
    Node *temp = TAIL; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node *n1 = new Node(6);
    Node *n2 = new Node(7);
    n1->next = n2;
    Node *n3 = new Node(8);
    n2->next = n3;
    Node *n4 = new Node(9);
    n3->next = n4;

    Node *HEAD = n1;
    Node *TAIL = n4;
    displayHead(HEAD);
    addToHead(HEAD, 5);
    displayHead(HEAD);

    
    displayTail(TAIL);
    addToTail(TAIL, 10);
    displayTail(TAIL);
}