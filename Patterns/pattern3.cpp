#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=i;
        while(j<=n){      //  1 1 1 1 1
            cout<<i;      //  2 2 2 2
            j++;          //  3 3 3
        }                 //  2 2
        cout<<endl;       //  1
        i++;
    }
    
    return 0;
}