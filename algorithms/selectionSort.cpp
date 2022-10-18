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
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr[] = {8, 7, 6, 9, 5, 4, 3, 3, 3, 3, 33, 3, 3, 55, 3, 3, 2, 26, 6, 7, 8, 9, 9, 99, 9, 9, 9, 9, 9, 35};
    int l = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, l);
    selectionSort(arr, l);
    printarray(arr, l);

    return 0;
}