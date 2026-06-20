/*
Detyrë në C++ – Doubly Linked List

- Krijohet klasë Node me:
    value, next, previous

- Krijohen 3 nyje (node):
    n1 = -14
    n2 = 13
    n3 = 55

- Lidhen nyjet:
    n1 <-> n2 <-> n3

- n1 ka previous = nullptr
- n3 ka next = nullptr
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *previous;
};

int main()
{
    Node *n1 = new Node();
    n1->value = -14;

    Node *n2 = new Node();
    n2->value = 13;

    Node *n3 = new Node();
    n3->value = 55;

    n1->next = n2;
    n1->previous = nullptr;

    n2->previous = n1;
    n2->next = n3;

    n3->previous = n2;
    n3->next = nullptr;

    return 0;
}