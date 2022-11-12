#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data) // constructor(create node)
    {
        this->data = data;
        next = NULL;
    }
};
// insertion at head
void insertInList(Node *&head, int d)
{
    Node *n = new Node(d);
    n->next = head;
    head = n;
}
// insertion at tail
void insertInListTail(Node *&tail, int d)
{
    Node *n = new Node(d);
    tail->next = n;
    tail = tail->next;
}
// print linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    printList(head);
    insertInList(head, 20);
    printList(head);
    insertInList(head, 30);
    insertInList(head, 40);
    printList(head);
    cout << endl;
    Node *tail = node1;
    insertInListTail(tail, 50);
    insertInListTail(tail, 60);
    printList(head);

    return 0;
}