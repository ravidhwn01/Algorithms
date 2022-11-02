#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// print array function
void printArray(int * arr, int l){
    for (int i = 0; i < l; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
// reverse function
void reverseArray(int * arr, int l){
    int s = 0; // starting index
    int e  = l-1; // ending index
    while (s<=e)
    {
        swap(arr[s++],arr[e--]);
    }
    

}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    // size of array
    int l = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is :"<<l<<endl;
    printArray(arr,l);
    reverseArray(arr,l);
    printArray(arr,l);

    return 0;
}