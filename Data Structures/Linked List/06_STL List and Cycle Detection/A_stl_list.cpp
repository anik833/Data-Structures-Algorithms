#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l; // TC O(1)
    // list<int> l(10); // TC O(N)
    // list<int> l(10,3);  // TC O(N)
    // list<int> l = {10,20,30,40,30}; // TC O(N)
    // list <int> l2(l); // TC O(N)
    // int a[] = {12,34,546,76};
    // list<int>l(a,a+4);
    vector<int>v = {12,23,34,5};
    list<int>l(v.begin(),v.end());

    // for(auto it = l.begin();it != l.end();it++)
    // {
    //     cout << *it << endl;
    // }
    for(int val : l)
    {
        cout << val << endl;
    }
    

    return 0;
}