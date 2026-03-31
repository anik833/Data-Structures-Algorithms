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

void input_doubly_linked_list(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val)
    {
        if(val == -1)
        {
            break;
        }
        
        input_doubly_linked_list(head,tail,val);
    }
    

    print_forward(head);

    return 0;
}