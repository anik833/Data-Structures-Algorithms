#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l(100);
    cout << l.size() << endl; // TC O(1)
    l.clear(); // TC O(N)
    cout << l.size() << endl; // TC O(1)

    cout << l.max_size() << endl; // TC O(1)
    if(l.empty())
    {
        cout << "empty" << endl;
    }
    list<int>l2 = {12,34,5,56};
    l2.resize(6,100);
    for(int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}