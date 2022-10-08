#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int nextnum = a+b;
        cout<<nextnum<<" ";
        a=b;
        b = nextnum;
    }
    // output = 0 1 1 2 3 5 8 13 21 34 55 89
    return 0;
}