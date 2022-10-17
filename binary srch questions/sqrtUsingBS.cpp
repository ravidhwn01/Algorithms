#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int bs(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int sqrt = mid * mid; // yha app ka code fat jayega guru!
        if (sqrt == n)
        {
            return mid;
        }
        else if (sqrt > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// int findSqrt(int x)
// {
//     return bs(x);
// }
double fullAns(int n, int fullnum, int integerSol)
{
    double factor = 1;
    double ans = integerSol;
    for (int i = 0; i < fullnum; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int tempSol = bs(n);
    cout << " the square root of number is : " << fullAns(n, 3, tempSol);
    return 0;
}