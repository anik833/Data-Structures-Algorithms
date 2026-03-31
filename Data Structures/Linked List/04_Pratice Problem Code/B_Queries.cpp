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

void insert_linked_list_head(Node *&head, Node *&tail, int v)
{
    Node *newhead = new Node(v);
    newhead->next = head;
    head = newhead;
    if (tail == NULL)
    {
        tail = head;
    }
}

void insert_linked_list_tail(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void delete_linked_list_any_pos(Node *&head, Node *&tail, int v)
{
    Node *tem = head;
    if(head == NULL)
    {
        return;
    }
    if (v == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    for (int i = 0; i < v - 1; i++)
    {
        if (tem->next == NULL)
        {
            return;
        }
        tem = tem->next;
    }
    Node *deletenode = tem->next;
    if(tem->next == NULL)
    {
        tail = tem;
        return;
    }
    else if (tem->next == tail)
    {
        tail = tem;
    }
    
    tem->next = tem->next->next;
    delete deletenode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void distributor(Node *&head, Node *&tail, int x, int v)
{
    if (x == 0)
    {
        insert_linked_list_head(head, tail, v);
    }
    else if (x == 1)
    {
        insert_linked_list_tail(head, tail, v);
    }
    else
    {
        delete_linked_list_any_pos(head, tail, v);
    }
    print_linked_list(head);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int queries;
    cin >> queries;

    while (queries--)
    {
        int x, v;
        cin >> x >> v;

        distributor(head, tail, x, v);
    }

    return 0;
}