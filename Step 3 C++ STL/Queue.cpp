#include<bits/stdc++.h>
using namespace std;
int main(){

    // Queue is a FIFO data structure (First In First Out)
    cout << "Using queue in C++ STL" << endl;
    queue<int> q;
    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.emplace(30);  // Faster insertion than push (no copy involved)
    cout << "Elements in queue after adding: ";
    // Displaying elements in the queue
    while(!q.empty()) {
        cout << q.front() << " ";  // front() returns the first element added
        q.pop();  // pop() removes the first element
    }

    // no top() function in queue like stack but we can use front() to get the first element
    // q.back() is also available to get the last element added
    cout << "\nQueue is empty now-";  // Now queue is empty
    cout << q.size() << endl;  // size will be 0 now

    // All other functions like size, empty, swap, etc. are also available just like vector
    // Accessing elements
    // cout << "First element: " << q.front() << endl;  // front() returns the first element added
    // cout << "Queue size: " << q.size() << endl;  // size

    return 0;

}