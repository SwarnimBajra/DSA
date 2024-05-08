#include <iostream>

using namespace std;

// Node class represents each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// SinglyLinkedList class manages the linked list operations
class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void addToHead(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void addToTail(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void add(int data, Node* predecessor) {
        if (predecessor == nullptr) {
            cout << "Predecessor node cannot be null." << endl;
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = predecessor->next;
        predecessor->next = newNode;
    }

     int peek(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        return head->data;
    }

    void removeFromHead() {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void remove(int data) {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        if (head->data == data) {
            removeFromHead();
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            if (current->next->data == data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }
        cout << "Node with data " << data << " not found." << endl;
    }

    Node* retrieve(int data) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    bool search(int data) {
        return retrieve(data) != nullptr;
    }

    void traverse() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }
};