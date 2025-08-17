#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> lst;
    cout << "Using list in C++ STL" << endl;
    // Adding elements to the list
    lst.push_back(10);
    lst.push_back(20);
    lst.push_front(5);  // Adds element at the front
    lst.emplace_back(30);  // Faster insertion than push_back (no copy involved)
    cout << "Elements in list after adding: ";
    for(auto element : lst) {
        cout << element << " ";
    }
    cout << endl;
    // Accessing elements
    cout << "First element: " << lst.front() << endl;  // front() returns the first element
    cout << "Last element: " << lst.back() << endl;    // back()
    // Removing elements
    lst.clear();  // Clear all elements
    cout << "List size after clearing: " << lst.size() << endl;
    // all other functions like size, empty, swap, etc. are also available just like vector
    return 0;

}