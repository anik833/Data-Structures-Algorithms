#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = {10,20,30,40,50,60,20,20};
    list<int>l2;
    l2 = l; // TC O(N)
    list <int> l3 = {100,200,300};
    vector<int> v = {1,23,34,4};
    // l2.assign(l.begin(),l.end()); // TC O(N)
    l2.push_front(5); // TC O(1)
    l2.push_back(70); // TC O(1)

    
    l2.pop_back(); // TC O(1)
    l2.pop_front(); // TC O(1)
    // cout << *next(l2.begin(),2) << endl; // TC O(N)
    // l.insert(next(l.begin(),3),100); // TC O(N)
    // l.insert(next(l.begin(),2),l3.begin(),l3.end()); // TC O(N+k)
    // l.insert(next(l.begin(),2),v.begin(),v.end()); // TC O(N+k)
    // l.erase(next(l.begin(),2),next(l.begin(),4)); // TC O(N+k)

    replace(l.begin(),l.end(),20,100); // TC O(N)

    auto it = find(l.begin(),l.end(),100); // TC O(N)
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    
    for(int val : l)
    {
        cout << val << endl;
    }
    
    return 0;
}