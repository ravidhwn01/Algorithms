#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//  working
int binarySearch(int *a, int low, int high, int key)
{
    int l = low;
    int h = high - 1;
    int mid = l + (h - l) / 2;
    while (l <= h)
    {

        if (a[mid] == key)
        {

            return mid;
        }
        if (a[mid] < key)
        {

            return binarySearch(a, mid + 1, high, key);
        }
        else
        {

            return binarySearch(a, low, mid - 1, key);
        }
    }
    return -1;
}
int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {

            s = mid + 1;
        }
        else
        {

            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}
int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    cout << pivot << endl;
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{
    int arr[] = {7, 9,11,12, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << getPivot(arr, n);
    cout << "key element's index: " << findPosition(arr, n, 7);

    return 0;
}