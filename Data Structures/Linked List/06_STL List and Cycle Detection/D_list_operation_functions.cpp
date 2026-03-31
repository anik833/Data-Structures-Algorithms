#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = {10,20,30,30,10,50,50};
    // l.remove(10); // TC O(N)
    // l.sort(); // ascending order // TC O(N*logN)
    // l.sort(greater<int>()); //descending order // TC O(N*logN) 
    // l.unique(); // TC O(n),with sort O(N*logN)
    l.reverse(); // TC O(N)
    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}