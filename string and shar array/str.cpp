#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   getline (cin, s); // complete line as a input
    int n=s.length();
// print string
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
// print string in reverse
    for(int i=n-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
 
    return 0;
}