#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max-heap
    priority_queue<int > max_heap;
    
    max_heap.push(3);
    max_heap.push(32);
    max_heap.push(50);
    max_heap.push(12);
    cout<< max_heap.size()<<endl;
    int n = max_heap.size();
    for (int i = 0; i < n; i++)
    {
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }
    cout<<endl;

   // min-app
   priority_queue<int, vector<int> , greater<int> > min_heap;
    min_heap.push(33);
    min_heap.push(342);
    min_heap.push(5);
    min_heap.push(1);
    cout<< min_heap.size()<<endl;
     int k = min_heap.size();
    for (int i = 0; i < k; i++) 
    {
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    return 0;
}