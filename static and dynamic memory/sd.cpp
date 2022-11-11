#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // reference variable concept
    int i = 4;
    int &j = i;
    cout << i << " " << j << endl;

    j++;
    cout << i << " " << j << endl;
    i++;
    cout << i << " " << j << endl;
    return 0;
}