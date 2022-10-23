#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,  string> m;
    m[1] = "ravi dahwan";
    m[2] = "ravwan";
    m[4] = "ravi ";
    m[6] = "rwan";
    cout<<endl;
   for (auto &&i : m)
   {
    cout<<i.first<<" "<<i.second<<endl;
   } 
   cout<<endl;
  // many operations can be done!
   
   
    
    return 0;
}