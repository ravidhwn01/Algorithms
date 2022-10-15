#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s = 0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            cout<<"1 mid"<<endl;
            ans  = mid;
            e = mid-1;
        }
        else if(arr[mid]<key){ 
            cout<<"2 mid"<<endl;  // right me jao
            s = mid+1;
        }
        else if(arr[mid]>key){ // left me jao
               cout<<"3 mid"<<endl;
                e=mid-1;
        }
        
      mid = s+(e-s)/2;
    }
    return ans;
    
}
int lastOcc(int arr[],int n,int key){
    int s = 0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans  = mid;
            s = mid+1;
        }
        else if(arr[mid]<key){   // right me jao
            s = mid+1;
        }
        else if(arr[mid]>key){ // left me jao
                e=mid-1;
        }
      mid = s+(e-s)/2;
    }
    return ans;
    
}
int main()
{
    int arr[]= {1,2,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"first occurance of  at index : "<<firstOcc(arr,n,4)<<endl;
    cout<<"last occurance of  at index : "<<lastOcc(arr,n,4)<<endl;
    return 0;
}