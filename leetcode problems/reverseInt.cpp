#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin>>s;
    // reverse(s.begin(),s.end());    // using string
    // cout<<s;

    // using integer and while loop   
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return ans=0;
        }
        ans = ans * 10 + digit;
        n/=10;

    }
    cout<<ans;

    return 0;
}