#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(int *a, int *b, int n, int m)
{
    int min = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n; i++)

    {
        int element = a[i];
        for (int  j = 0; j < m; j++)
        {
            if(element==b[j]){
                ans.push_back(element);
                b[j]=min;
                break;
            }
        }
        
    }
    return ans;
   
}
int main()
{
    int arr1[] = {1,4, 2,5, 6,6,6,6,6,6, 8, 5};
    int arr2[] = {5,6,8,8,8,8,9,4,4,4,4};
    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);
   vector<int> array=  findArrayIntersection(arr1,arr2,l1,l2);
   for(int v:array){
    cout<<v<< " ";
   }

    return 0;
}