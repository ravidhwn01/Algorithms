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
void InSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shifting
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {8, 7, 6, 9, 5, 4, 3, 3, 3, 3, 33, 3, 3, 55, 3, 3, 2, 26, 6, 7, 8, 9, 9, 99, 9, 9, 9, 9, 9, 35};
    int l = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, l);
    InSort(arr, l);
    printarray(arr, l);

    return 0;
}