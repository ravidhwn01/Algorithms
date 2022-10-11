#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findUnique(int* a, int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^a[i];
    }
    return ans;
}
int main()
{
   int odd[] = {1, 2, 6, 2, 1};
    int l1 = sizeof(odd) / sizeof(odd[0]);
  cout<<  findUnique(odd,l1);
    return 0;
}