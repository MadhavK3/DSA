#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Using Multimap in C++ STL key can be duplicate and sorted eg clg diff roll no but same names" << endl;
    multimap<int, string> m;
    m.insert({1, "Amit"});
    m.insert({2, "Rohit"});
    m.insert({3, "Amit"});
    m.insert({4, "Rahul"});
    m.insert({5, "Amit"});
    m.insert({2,"Rajesh"}); // Duplicate key with different value

    cout << "Size of multimap: " << m.size() << endl;
    cout << "Elements in multimap:" << endl;
    for (auto pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }
    cout << "Is multimap empty? " << (m.empty() ? "Yes" : "No") << endl;
    cout << "Value associated with key 2: "<<m.count(2) << " entries found." << endl;
    cout << "Values associated with key 2: "<<m.equal_range(2).first->second << " and " << m.equal_range(2).second->second << endl;

    // equal_range gives a range of elements with the same key
    auto it = m.find(3); // Find key 3, it is an iterator
    cout << "Searching for key 3..." << endl;
    if (it != m.end()) {
        cout << "Found key 3 with value: " << it->second << endl;   // for map m[3] is valid but for multimap it is not valid
        cout << "All values for key 3: ";
        auto range = m.equal_range(3);
        for (auto itr = range.first; itr != range.second; ++itr) {
            cout << itr->second << " ";
        }
    } else {
        cout << "Key 3 not found." << endl;
    }
    cout << endl;
    // Erase an element
    m.erase(2); // Erase all entries with key 2
    cout << "After erasing key 2, size of multimap: " << m.size() << endl;
    cout << "Elements in multimap after erasing key 2:" << endl;
    for (auto pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }
    // Clear the multimap
    m.clear();
    cout << "After clearing, is multimap empty? " << (m.empty() ? "Yes" : "No") << endl;
    cout << "Size of multimap after clearing: " << m.size() << endl;    

    return 0;

}