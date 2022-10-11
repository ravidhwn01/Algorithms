#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool lS(int* arr, int l, int k){
    for (int i = 0; i < l; i++)
    {
        if(arr[i]==k){
            return 1;
        }
    }
    return 0;
    
}
int main()
{
    int arr[]={234,4434,5345,45,454,54,6,6};
     cout<<" Enter the key : "<<endl;
    int key;
    cin>>key;
bool found = lS(arr,8,key);
if(found){
    cout<<"key is present"<<endl;
}
else{
    cout<<"key is not present"<<endl;
}
    return 0;
}