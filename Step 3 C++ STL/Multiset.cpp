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

    int cnt =  ms.count(20); // Count the number of occurrences of 20 in the multiset (can be more than 1)
    cout << "\nCount of 20 in multiset: " << cnt << endl; // Will print the count of 20
    cout << "In multiset it can be more than 1 as multiset allows duplicates" << endl;


    // deleting elements
    ms.erase(20); // Erase all occurrences of 20 from the multiset
    cout << "Elements in multiset after erasing 20: ";
    for(auto element : ms) {
        cout << element << " ";  // Elements will be printed in sorted order
    }

    // for deleting perticular we use iterators 

    ms.erase(ms.find(15)); // Erase the first occurrence of 15 from the multiset
    cout << "\nElements in multiset after erasing first occurrence of 15: ";
    for(auto element : ms) {
        cout << element << " ";  // Elements will be printed in sorted order
    }
    // Like set we can also use lower and upper bound in multiset

    // All Other functions like size, empty, swap, etc. are also available just like vector
    cout << "\nSize of multiset: " << ms.size() << endl; // Size of the multiset
    cout << "Is multiset empty? " << (ms.empty() ? "Yes" : "No") << endl; // Check if the multiset is empty


    // Accessing elements
    cout << "First element: " << *ms.begin() << endl;  // First element in the multiset
    cout << "Last element: " << *prev(ms.end()) << endl; // Last
    cout << endl;

    return 0;

}