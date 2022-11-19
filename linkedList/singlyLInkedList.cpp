#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Node class
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
    // delete node
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "Deleting node with data " << data << endl;
    }
};
// insertion at head(start)
void insertInList(Node *&head, int d)
{
    Node *n = new Node(d);
    n->next = head;
    head = n;
}
// insertion at tail(end)
void insertInListTail(Node *&tail, int d)
{
    Node *n = new Node(d);
    tail->next = n;
    tail = tail->next; // (tail = n;) working // tail always point at last node (null)
}
// insertion at middle(at any position)
void insertInListMiddle(Node *&head, int d, int position)
{
    if (position == 1)
    {
        insertInList(head, d);
        return;
    }
    Node *temp = head;
    for (int i = 0; i < position - 1; i++) // going to that position where node will be inserted
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "aa gya yaha pe" << endl;
        insertInListTail(head, d);
        return;
    }
    Node *n = new Node(d);
    n->next = temp->next;
    temp->next = n;
}
// deletion  in singly linked list
void deleteInList(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < position - 2; i++)
    {
        temp = temp->next;
    }
    Node *n = temp->next;
    temp->next = n->next;
    delete n;
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
    cout << "insertion at head(start) " << endl;
    insertInList(head, 20);
    insertInList(head, 30);
    insertInList(head, 40);
    printList(head);
    cout << "insertion at tail(end) " << endl;
    Node *tail = node1;
    insertInListTail(tail, 50);
    insertInListTail(tail, 60);
    insertInListTail(tail, 70);
    printList(head);
    cout << "insertion at any position " << endl;
    insertInListMiddle(head, 100, 3);
    insertInListMiddle(head, 67, 8);
    printList(head);

    return 0;
}