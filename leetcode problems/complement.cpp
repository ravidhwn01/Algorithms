#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bitwisecomplement(int x)
{
    int n = x;

    int mask = 0;
    if (x == 0)
    {
        return 1; // edge case
    }
    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    int ans = (~x) & mask;
    return ans;
}
int main()
{
  cout<<  bitwisecomplement(0);
    return 0;
}