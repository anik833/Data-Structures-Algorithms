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

void insert_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

int max_min_dif_linked_list(Node* head)
{
    int max_ = head->val;
    int min_ = head->val;
    Node* tem = head;
    while (tem != NULL)
    {
        max_ = max(max_,tem->val);
        min_ = min(min_,tem->val);
        tem = tem->next;
    }
    return max_ - min_;
    
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
        insert_linked_list(head, tail, val);
    }

    cout << max_min_dif_linked_list(head);

    return 0;
}