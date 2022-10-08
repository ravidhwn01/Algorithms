#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    while(n!=0){
        
        if(n&1){
            count++;
        }
        n>>=1;
    }
    cout<<count;
//     262143 input
//      18    output(set bits in 262143)
    return 0;
}