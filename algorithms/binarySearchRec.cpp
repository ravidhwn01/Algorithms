#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int binarySearch(int *a, int low, int high, int key)
{
    int l = low;
    int h = high - 1;
    int mid = l + (h -l) / 2;  // we can write it in another ways
    while (l <= h)
    {

        if (a[mid] == key)
        { 
            cout<<"mid element"<<endl;
            return mid;
        }
        if (a[mid] < key)
        {
            cout<<"key is greater than mid element"<<endl;
            return binarySearch(a, mid + 1, high, key);
        }
        else
        {
            cout<<"key is less than mid element"<<endl;
            return binarySearch(a, low, mid - 1, key);
        }
    }
return -1;
}
int main()
{
    int arr[] = {
        1,2,3,4,5,6,7,8,9
    };
    int l = sizeof(arr) / sizeof(arr[0]);
    printarray(arr,l);
  int index =   binarySearch(arr, 0, l, 7);
  cout<<index;
    return 0;
}