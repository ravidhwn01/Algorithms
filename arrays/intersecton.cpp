#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int printarray(int* a, int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
void intersectionOfArrary(int *A, int *B, int l1, int l2)
{
    int i,j,k=0;
    int arr3[10];
    for (i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (A[i]==B[j])
            {
               arr3[k] = A[i];
               k++;
            }
           
        }
        
        
    }
    printarray(arr3,k);

}
int main()
{
    int arr1[] = {1, 2, 6, 8, 5};
    int arr2[] = {5};
    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);
    // cout<<l1<<endl;
    // cout<<l2<<endl;
    intersectionOfArrary(arr1,arr2,l1,l2);
    return 0;
}