#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tem = head;

    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    
}

void print_backward(Node* tail)
{
    Node* tem = tail;

    while (tem != NULL)
    {
        cout << tem->val << endl;
        tem = tem->prev;
    }
}

void insert_at_any_position(Node* head,int idx,int val)
{
    Node* newnode = new Node(val);

    Node* temp = head;
    for(int i = 1;i<idx-1;i++)
    {
        temp = temp->next;
    }
    

    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

int main()
{
    // Node* head = NULL;
    // Node* tail = NULL;

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    insert_at_any_position(head,3,100);
    
    print_forward(head);
    cout << "\n";
    print_backward(tail);

    return 0;
}