#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }
    // copy temp into num vector
    nums = temp;
}
int main()
{
    vector<int> arr = {2, 3, 4, 6, 43, 7, 8, 9};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    rotate(arr, 3);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}