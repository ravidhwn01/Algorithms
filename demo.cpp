// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {42,545,56,6,6,77,7,44,234,5,5,6,66,6,454345,45345,4534534,53453,5344534,34543};
//     int size = sizeof(arr); // size of arr in memory
//     int n = sizeof(arr)/sizeof(arr[0]); // length of an array 
//     cout<<size<<endl;
//     cout<<n;
//     return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;

int main(){

int n;
cin>>n;

int ans=0;
int i=0;
while (n != 0)
{
    int bit = n & 1;
    ans=(bit *    pow(10,i) ) + ans;
    n = n >> 1;
    i++;
}
cout<<" Answer is " << ans  <<endl;


}