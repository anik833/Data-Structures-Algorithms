#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_linked_list_without_duplicate_value(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    for (Node* i = head; i != NULL;i=i->next)
    {
        if(newnode->val == i->val)
        {
            return;
        }
    }
    
    tail->next = newnode;
    tail = tail->next;
}


void print_linked_list(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_linked_list_without_duplicate_value(head, tail, val);
    }

    print_linked_list(head);    

    return 0;
}