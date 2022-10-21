#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout<<v.size()<<endl;
    vector<int> a(5,1);
    vector<int> last(a);
    for (auto &&i : last)
    {
        cout<<i;
    }
    
    // v.push_back(3);
    // cout<<"size : "<<v.size()<<endl;
    // v.push_back(43);
    // cout<<"size : "<<v.size()<<endl;
    // cout<<"capacity : "<<v.capacity()<<endl;
    // v.push_back(4);
    // cout<<"size : "<<v.size()<<endl;
    // cout<<"capacity : "<<v.capacity()<<endl;

    return 0;
}