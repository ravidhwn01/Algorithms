#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n,int k){
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
         if(ans==n){
            return true;  // we can use pow func but it is not optimize solution
         }
         if(ans<INT_MAX/3)
         ans = ans*k;
    }
    return false;
    
}
int main()
{
        int t,k;
        cout<<"enter number is Power Of k  : ";
        cin>>t; 
        
        cout<<" enter the value of k ";
        cin>>k; 


  cout<<isPowerOfTwo(t,k);
  // wa mja aa gya 😍

    return 0;
}