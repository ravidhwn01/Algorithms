#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i =2;
    cin>>n;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"not prime for :"<<i<<endl;

        }
        else{
            cout<<"prime for :"<<i<<endl;
        }
        
         i++;
    }
    
    return 0;
}