// count prime
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // int count=0;
    // for(int i=2;i<=n;i++){
    //     int flag=0;
    //     for(int j=2;j*j<=i;j++){
    //         if(i%j==0){
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag==0){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;
    vector<int> p(5,true);
    // print vector
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    return 0;
}