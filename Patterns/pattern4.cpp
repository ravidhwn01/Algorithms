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
        int j=1;
        while(j<=n){      
            // cout<<j <<" ";   // simple    
            cout<<n-j+1 <<" ";    // reverse  like- 3 2 1  
            j++;          
        }                 
        cout<<endl;       
        i++;
    }
    return 0;
}
// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9