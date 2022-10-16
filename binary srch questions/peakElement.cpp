#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// kisi mountain array me peak element 
int peakelementInArray(int* arr,int high){
    int s = 0;
    int e = high-1;
    int  mid = s+(e-s)/2;
    while(s<e){           // s<=e  // vo element ko bta nhi  payega

    if(arr[mid]<arr[mid+1] ){
        s = mid+1;
    }else{
        e = mid;
    } 
    mid = s+(e-s)/2;  // update mid
    }
    return s;
}
int main()
{
    //  complexity  is O(log(N))
    int arr[]= {1,2,4,4,4,6,7,8,9,5,4,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the peak  elements  index is : "<<peakelementInArray(arr,n)<<endl;
    return 0;
}