#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   // print a text using string
    string s = "Hello World";
    cout << s << endl;
    // print a text using char array
    char c[] = "Hello World";
    cout << c << endl;
    // print a text using char array
    char c1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    cout << c1 << endl;
    // print a text using char array
    char c2[12] = "Hello World";
    cout << c2 << endl;
    // print a text using char array
    char c3[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    cout << c3 << endl;
    

    return 0;
}