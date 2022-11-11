#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // dynamic memory allocation
    int *p = new int(4);
    cout << p << " " << *p << endl;
    int *q = p;
    cout <<" q = "<< q << " " <<" *q = "<< *q << endl;
    *q = 5;
    cout <<" p = "<< p << " " <<" *p = "<< *p << endl;
  int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;  // deleting memory from heap
    arr = NULL;    // declaring arr = NULL

    return 0; 
}