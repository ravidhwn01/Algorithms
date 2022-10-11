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
void swapAlternate(int *A, int l1)
{
    for (int i = 0; i < l1; i += 2)
    {
        if (i + 1 < l1)
        {
            swap(A[i], A[i + 1]);
        }
    }
}
int main()
{
    int even[] = {1, 2, 6, 8, 5, 4};
    int odd[] = {1, 2, 6, 8, 5};
    int l1 = sizeof(even) / sizeof(even[0]);
    int l2 = sizeof(odd) / sizeof(odd[0]);
    swapAlternate(even, l1);
    printarray(even, l1);
    swapAlternate(odd, l2);
    printarray(odd, l2);

    return 0;
}