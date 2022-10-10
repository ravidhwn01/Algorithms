#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int* arr,int l){
    int max = INT_MIN;
    for (int i = 0; i < l; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
        
    }
    return max;
}
int min(int* arr,int l){
    int min = INT_MAX;
    for (int i = 0; i < l; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
        
    }
    return min;
}
int sumOfArray(int* arr,int l){
    int sumofarr = 0;

    for (int i = 0; i < l; i++)
    {
        sumofarr = sumofarr+arr[i];
        
    }
    return sumofarr;
}
int main()
{
    int  size;
    cin>>size;
    int arr[100];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"max :"<<max(arr,size)<<endl;
    cout<<"min :"<<min(arr,size)<<endl;
    cout<<"sum :"<<sumOfArray(arr,size)<<endl;

    
    return 0;
}