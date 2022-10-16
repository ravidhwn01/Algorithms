#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// not working 😑
int getPivot(int arr[], int n)
{
    cout<<"in the func"<<endl;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        // cout<<"in the while loop"<<endl;
        if (arr[mid] >= arr[0])
        {
            cout<<"in the if"<<endl;
            s = mid + 1;
        }
        else
        {
            cout<<"in the else"<<endl;
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout<<"return"<<endl;
    return s;
}
int main()
{
    int arr[] = {11,12,13,23,423,55,14,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "pivot is : " << getPivot(arr, n);

    return 0;
}