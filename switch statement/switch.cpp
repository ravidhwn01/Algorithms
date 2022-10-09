#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ch;
    char num ='1';
    cin>>ch;

    switch (ch)
    {
    case 1:
        cout<<"this is this is  only";
        break;
    case 2:
    switch (num)  // we can use  nested switch
    {
    case '1':
        cout<<"this is nested loop";  
        break;
    
    
    }
    
    break;
    default:
    cout<<"this is default";
        
    }
    return 0;
}