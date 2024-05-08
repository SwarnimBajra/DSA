#include <iostream>
#include "linkedlist.h"
using namespace std;

// Test program
int main() {
    SinglyLinkedList linkedList;

    cout << "Is list empty? " << linkedList.isEmpty() << endl;

    linkedList.addToHead(1);
    linkedList.addToTail(2);
    linkedList.addToTail(3);
    linkedList.addToHead(0);

    cout << "Traversing the list:" << endl;
    linkedList.traverse();

    cout << "Searching for data 2: " << linkedList.search(2) << endl;
    cout << "Searching for data 4: " << linkedList.search(4) << endl;

    Node* nodeToRemove = linkedList.retrieve(2);
    linkedList.add(10, nodeToRemove);

    cout << "Traversing the modified list:" << endl;
    linkedList.traverse();

    linkedList.removeFromHead();
    linkedList.remove(10);

    cout << "Traversing the final list:" << endl;
    linkedList.traverse();

    return 0;
}