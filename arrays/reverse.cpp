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
void reverse(int* arr, int l){
    int start  =0;
    int end = l-1;

   while (start<=end)
   {
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
   
    

}
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,0};
    int l = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,l);
    reverse(arr,l);
    printarray(arr,l);
    
    return 0;
}