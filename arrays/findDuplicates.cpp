#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(int *a, int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans^= i;
    }
    return ans;
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,6 };
    int l1 = sizeof(arr) / sizeof(arr[0]);
    cout<<findDuplicate(arr,l1);
    return 0;
}