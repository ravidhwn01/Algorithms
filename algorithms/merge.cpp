#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Merge(int *a, int p, int q, int r)
{
    
    int k;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = a[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = a[q + 1 + j];
    }

    int i = 0, j = 0;
    k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }
    while (j < n2)
    {
        a[k++] = R[j++];
    }
}
void mergeSort(int *a, int p, int r)
{
    if (p < r)
    {
    int q = p + (r - p) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        Merge(a, p, q, r);
    }
}
int main()
{
    int arr[] = {15, 40, 93, 27, 23, 56, 1, 0, 8, 7, 0, 8, 7, 6, 5, 5, 4, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, length);
    mergeSort(arr, 0, length - 1);
    printarray(arr, length);

    return 0;
}