#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
         if(ans==n){
            return true;  // we can use pow func but it is not optimize solution
         }
         if(ans<INT_MAX/3)
         ans = ans*3;
    }
    return false;
    
}
int main()
{
        int t;
        cin>>t; 

  cout<<isPowerOfTwo(t);

    return 0;
}