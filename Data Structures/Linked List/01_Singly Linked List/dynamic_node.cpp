#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node* head = new Node(010);
    Node* b = new Node(020);
    Node* c = new Node(030);

    head->next = b;
    b->next = c;

    cout << head->val << endl
         << head->next->val <<endl
         << b->next->val << endl;
    
    return 0;
}