#include<bits/stdc++.h>
using namespace std;
int main(){

    // multiset is a data structure that allows you to store elements in a sorted order, allowing duplicate elements.
    cout << "Using multiset in C++ STL" << endl;
    multiset<int> ms; // Multiset of integers
    // Adding elements to the multiset
    ms.insert(10);
    ms.insert(20);
    ms.insert(5);
    ms.emplace(15);  // Faster insertion than insert (no copy involved)
    ms.insert(20); // Duplicate element, will be added
    cout << "Elements in multiset after adding: ";
    for(auto element : ms) {
        cout << element << " ";  // Elements will be printed in sorted order
    }
    cout << endl;
    
    return 0;

}