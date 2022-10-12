#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(int *a, int *b, int n, int m)
{
  /*
   int i=0 ,j=0;
   vector<int> ans;
   while(i<n&&j<m){
    if(a[i]==b[j]){
        ans.push_back(a[i]);
    }
    else if(a[i]<b[j]){
        i++;
        j++;
    }
    else{
        j++;
    }
   }
  
  
  */





    int min = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    // we can make it more optimize 😍 array is sorted and non-decreasing
    {
        int element = a[i];
        for (int j = 0; j < m; j++)
        {
            if (element < b[j])
            {

                break;
            }
            if (element == b[j])
            {
                ans.push_back(element);
                b[j] = min; // updating 2nd array with min value
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {
        3,
        4,
        5,
        6,
    };
    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> array = findArrayIntersection(arr1, arr2, l1, l2);
    for (int v : array)
    {
        cout << v << " ";
    }

    return 0;
}