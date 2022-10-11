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
void bubbleSort(int *A, int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
// iterative approach
// int binarySearch(int arr[], int size, int element)
// {
//     int low, mid, high;
//     low = 0;
//     high = size - 1;

//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// recursive approach
int binarySearch(int * arr,int low ,int high,int k)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
            return mid;

        if (arr[mid] > k)
            return binarySearch(arr, low, mid - 1, k);

        return binarySearch(arr, mid + 1, high, k);
    }

    return -1;
}

int main()
{

    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    // int arr[] = {234, 4434, 5345, 45, 454, 54, 6, 5};
                   // 5 6 45 54 234 454 4434 5345
    int size = sizeof(arr) / sizeof(int);
    int element = 5;
    bubbleSort(arr, size);
    printarray(arr, size);
    int searchIndex = binarySearch(arr, 0, size,element);
    cout << "the element " << element << " found at index " << searchIndex << endl;

    return 0;
}