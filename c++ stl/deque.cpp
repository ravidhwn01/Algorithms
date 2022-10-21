#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);  //push from back side
    d.push_back(3);
    d.push_front(5); //push from front side
    for (auto &&i : d)
    {
        cout << i << " ";
    }
    cout<<endl;
    // d.pop_back();  //pop from back side
    // d.pop_front(); //pop from front side
    // for (auto &&i : d)
    // {
    //     cout << i << " ";
    // }

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    return 0;
}