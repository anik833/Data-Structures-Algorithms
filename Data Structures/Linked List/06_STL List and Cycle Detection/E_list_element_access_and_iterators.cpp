#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = {10,20,30,40,50};
    // element access functions
    cout << l.back() << endl
         << l.front() << endl
         << *next(l.begin(),2) << endl;
    
    // iterators 
    cout << *l.begin() << endl
         << *l.end() << endl;
    
    return 0;
}