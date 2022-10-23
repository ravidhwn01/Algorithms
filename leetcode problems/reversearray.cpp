#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {11,7,3,12,4};
    for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;
    for (int i = 0; i < arr.size()/2; i++)
    {
         swap(arr[i],arr[arr.size()-1-i]);
    }
    cout<<endl;
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

//complexity  O(log(N))


    return 0;
}