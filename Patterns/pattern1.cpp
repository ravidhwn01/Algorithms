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
        while(j<=i){
            cout<<j+i-1; //rows m col create karega!
            j++;
        }
        cout<<endl;
        i++;
    }
    // while (i<=n)
    // {
    //     int j = 1;
    //     while(j<=n){
    //         cout<<" * "; //rows m col create karega!
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    return 0;
}