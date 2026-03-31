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
        cout << tem->val << endl;
        tem = tem->next;
    }
    
}


void delete_at_any_position(Node* head,int idx)
{
    Node* temp = head;
    for (int i = 1; i < idx-1; i++)
    {
        temp= temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    // deleteNode->next->prev = temp;
    temp->next->prev = temp;
    
    delete deleteNode;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node( 20);
    Node* b = new Node(30);
    Node* tail = new Node (40);

    head->next  = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;


    delete_at_any_position(head,3);

    print_forward(head);    

    return 0;
}