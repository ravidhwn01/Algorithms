// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>  l;
//     l.push_back(3);
//     l.push_front(4);
//      for (auto &&i : l)
//     {
//         cout << i << " ";
//     }
//     cout<<endl;
//     return 0; 
// }

// C++ program to access Kth element
// of the list using advanced
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	// Create list with initial value 100
	list<int> li(5, 0);

	// Insert 20 and 30 to the list
	li.push_back(20);
	li.push_back(30);

	// Elements of list are
	// 100, 100, 100, 100, 100, 20, 30

	// Initialize iterator to list
	list<int>::iterator it = li.begin();

	// Move the iterator by 5 elements
	advance(it, 5);

	// Print the element at the it
	cout << *it<<endl;
 for (auto &&i : li)
    {
        cout << i << " ";
    }
	return 0;
}
