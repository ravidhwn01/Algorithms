#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    st.push("ravi");
    st.push("kumar");
    st.push("dhawan");
    int i;
    while (st.empty() != 1)
    {

        cout << "poped element is " << st.top() << endl;
        st.pop();
    }
    cout << endl;

    return 0;
}

// https://www.geeksforgeeks.org/analysis-of-time-and-space-complexity-of-stl-containers/

//  time complexity of c++ stl containers.