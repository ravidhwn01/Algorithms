#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int rowSum[n];
    for(int i=0;i<n;i++){
        rowSum[i] = 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rowSum[i] += arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<rowSum[i]<<" ";
    }
    cout<<endl;
    // column wise sum
    int colSum[m];
    for(int i=0;i<m;i++){
        colSum[i] = 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            colSum[j] += arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        cout<<colSum[i]<<" ";
    }

// 3 rows
// 3  column
// intput
// 1
// 2 
// 1
// 1
// 2
// 1
// 1
// 2
// 1
// 4 4 4   row sum
// 3 6 3   column sum
    return 0;
}