#include<bits/stdc++.h>
using namespace std;
int main(){

    // Prority Queue is a data structure that allows you to store elements with priorities, where the element with the highest priority is served before others.
    cout << "Using priority queue in C++ STL" << endl;
    priority_queue<int> pq; // Max-Heap by default (largest element has highest priority)
    // Adding elements to the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.emplace(15);  // Faster insertion than push (no copy involved)
    cout << "Elements in priority queue after adding: (highest priority first default)" << endl;
    // Displaying elements in the priority queue
    while(!pq.empty()) {
        cout << pq.top() << " ";  // top() returns the highest priority element
        pq.pop();  // pop() removes the highest priority element
    }


    cout << "\nPriority queue is empty now-";  // Now priority queue is empty
    cout << pq.size() << endl;  // size will be 0 now



    // You can also create a Min-Heap by using a custom comparator
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap (smallest element has highest priority)
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.emplace(15);  // Faster insertion than push (no copy involved)
    cout << "Elements in min-heap priority queue after adding: (lowest priority first)" << endl;
    // Displaying elements in the min-heap priority queue
    while(!minHeap.empty()) {
        cout << minHeap.top() << " ";  // top() returns the lowest priority element
        minHeap.pop();  // pop() removes the lowest priority element
    }

    // Now min-heap priority queue is empty
    cout << "\nMin-Heap priority queue is empty now-";  // Now min-heap priority queue is empty
    cout << minHeap.size() << endl;  // size will be 0 now
    // All other functions like size, empty, swap, etc. are also available just like vector
    return 0;

}