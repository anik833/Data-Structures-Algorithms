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

void insert_at_any_pos(Node *head,int index,int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;        
    }
    // temp at index -1

    // Node *tem_node = temp->next;
    // temp->next = newnode;
    // newnode->next = tem_node;
    
    newnode->next = temp->next;
    temp->next = newnode;

}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head,1,200);
    insert_at_any_pos(head,1,300);

    print_linked_list(head);

    return 0;
}