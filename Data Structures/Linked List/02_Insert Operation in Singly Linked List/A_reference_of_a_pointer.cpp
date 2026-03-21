#include <bits/stdc++.h>
using namespace std;
void fun(int* p)
{
    int y = 200;
    // *p = y;
    *p = 200;
    p = NULL;
    cout << "fun funciton:" << *p << "\n";
}
int main()
{
    int x = 10;
    int* p = &x;
    
    fun(p);

    cout << "main funciton:" << *p;
    
    return 0;
}