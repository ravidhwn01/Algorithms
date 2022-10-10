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
int main()
{
    int arr[]={234,4434,5345,45,454,54,6,6};
    int arr1[10]={0};
    int arr2[5];
    int l = sizeof(arr)/sizeof(arr[0]);
    int l1 = 10;
    printarray(arr,l);
    printarray(arr1,l1);
    for (int i = 0; i < 5; i++)
    {
        cin>>arr2[i];
    }
    
    printarray(arr2,5);
    return 0;
}