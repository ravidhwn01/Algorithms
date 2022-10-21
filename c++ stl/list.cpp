#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int>  l;
    l.push_back(3);
    l.push_front(4);
     for (auto &&i : l)
    {
        cout << i << " ";
    }
    cout<<endl;
    return 0; 
}