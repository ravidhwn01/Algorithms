#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout<<i<<" "; 
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
// 111111111
// 222222222
// 333333333
// 444444444