#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= 5)
        {
            if (ch <= 'Z')
            {
                cout << ch << " ";
                ch++;
                
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}