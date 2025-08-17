#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int> dq;
    cout << "Using deque in C++ STL" << endl;
    // Adding elements to the deque
    dq.push_back(10);
    dq.push_front(5);  // Adds element at the front
    dq.emplace_back(20);  // Faster insertion than push_back (no copy involved)
    cout << "Elements in deque after adding: ";
    for(auto element : dq) {
        cout << element << " ";
    }
    cout << endl;
   //  deletion 
    dq.pop_back();  // Removes the last element
    dq.pop_front(); // Removes the first element
    cout << "Elements in deque after popping: ";
    for(auto element : dq) {
        cout << element << " ";
    }

    // both front and back functions are available 
    // All other functions like size, empty, swap, etc. are also available just like vector
    return 0;

}