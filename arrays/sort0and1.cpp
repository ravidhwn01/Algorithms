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
void sortOne(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    while (i <j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {

            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[] = {0,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0, 1, 0, 1, 1, 0};
    int l1 = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, l1);
    sortOne(arr, l1);
    printarray(arr, l1);

    return 0;
}