#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Unsorted Map in C++ STL allows unique keys and values, but does not maintain any order. It is useful for fast lookups." << endl;
    unordered_map<int, string> m;
    m[1] = "Amit";
    m[2] = "Rohit";
    m[3] = "Amit";
    m.insert({4, "Rahul"});
    m.insert({5, "Amit"});
    cout << "Size of unordered map: " << m.size() << endl;
    cout << "Elements in unordered map:" << endl;
    for (auto pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }
    m[6] = "Default"; // Adding a new key with default value
    cout << "Is unordered map empty? " << (m.empty() ? "Yes" : "No") << endl;
    cout << "Value associated with key 2: " << m[2] << endl;
    cout << "Value associated with key 6 (default): " << m[6] << endl;
    cout << "After accessing key 6, size of unordered map: " << m.size() << endl;
    auto it = m.find(3); // Find key 3, it is an iterator
    cout << "Searching for key 3..." << endl;
    if (it != m.end()) {
        cout << "Found key 3 with value: " << it->second << endl;
    } else {
        cout << "Key 3 not found." << endl;
    }
    // Erase an element
    m.erase(2); // Erase key 2
    cout << "After erasing key 2, size of unordered map: " << m.size() << endl;
    cout << "Elements in unordered map after erasing key 2:" << endl;
    for (auto pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }
    // Clear the unordered map
    m.clear();
    cout << "After clearing, is unordered map empty? " << (m.empty() ? "Yes" : "No") << endl;
    cout << "Size of unordered map after clearing: " << m.size() << endl;   
    return 0;

}