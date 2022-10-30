#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// search element in 2d array
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
    int x;
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}
// int main()
// {
   
//     // 2d array
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     // print 2d array
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // print 2d array in spiral form
//     int top = 0;
//     int bottom = 2;
//     int left = 0;
//     int right = 2;
//     int dir = 0;
//     while (top <= bottom && left <= right)
//     {
//         if (dir == 0)
//         {
//             for (int i = left; i <= right; i++)
//             {
//                 cout << arr[top][i] << " ";
//             }
//             top++;
//         }
//         else if (dir == 1)
//         {
//             for (int i = top; i <= bottom; i++)
//             {
//                 cout << arr[i][right] << " ";
//             }
//             right--;
//         }
//         else if (dir == 2)
//         {
//             for (int i = right; i >= left; i--)
//             {
//                 cout << arr[bottom][i] << " ";
//             }
//             bottom--;
//         }
//         else if (dir == 3)
//         {
//             for (int i = bottom; i >= top; i--)
//             {
//                 cout << arr[i][left] << " ";
//             }
//             left++;
//         }
//         dir = (dir + 1) % 4;
//     }

//     return 0;
// }