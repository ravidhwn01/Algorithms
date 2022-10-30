#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// not working 😑
bool check(vector<int>&num){
    int count = 0;
    int n = num.size();
    for(int i=1;i<n-1;i++){
        if(num[i+1]>num[i]){
            count++;
        }
    }
    if(num[n-1]>num[0]){
        count++;
    }
    return count<=1 ;
}
int main()
{
    vector<int> arr = {3,4,5,1,2};
    cout<<check(arr);

    return 0;
}