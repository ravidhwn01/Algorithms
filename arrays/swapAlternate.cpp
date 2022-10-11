#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
  int arr1[] = {1, 2, 6, 8, 5};
  int l1 = sizeof(arr1) / sizeof(arr1[0]);

  for (int i = 0; i < l1;i+=2)
  {
    if(i+1<l1){
        swap(arr1[i],arr1[i+1]);
    }
  }
  printarray(arr1,l1);
  
    return 0;
}