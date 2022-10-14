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
int partition(int *a, int low, int high)
{
   

    int pivot = a[high];  // pivot as a last element
    int i = low - 1;
    int j = high+ 1;
    int temp;

    // int pivot = a[low];     // pivot  as a first element
    // int i = low-1;
    // int j = high+1;
    // int temp;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
        {

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);

    temp = a[i];
    a[i] = a[high-1];
    a[high-1] = temp;
    return i;
}
void quickSort(int *a, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, length);
    quickSort(arr, 0, length - 1);
    printarray(arr, length);

    return 0;
}