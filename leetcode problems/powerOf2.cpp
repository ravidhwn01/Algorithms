#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    for (int i = 0; i < 30; i++)
    {
         if(pow(2,i)==n){
            return true;
         }
    }
    return false;
    
}
int main()
{
         

  cout<<isPowerOfTwo(16);

    return 0;
}