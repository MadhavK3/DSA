#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Using Map in C++ STL  key is unique and sorted and other element can be duplicate eg clg diff roll no but same names" << endl;
    map<int, string> m;
    m[1] = "Amit";
    m[2] = "Rohit";
    m[3] = "Amit";
    m.insert({4, "Rahul"});
    m.insert({5, "Amit"});

    cout << "Size of map: " << m.size() << endl;
    cout << "Elements in map:" << endl;
    for (auto pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }
    m[6] = "Default"; // Adding a new key with default value
    cout << "Is map empty? " << (m.empty() ? "Yes" : "No") << endl;
    cout << "Value associated with key 2: " << m[2] << endl;
    cout << "Value associated with key 6 (default): " << m[6] << endl;
    cout << "After accessing key 6, size of map: " << m.size() << endl;

     auto it = m.find(3); // Find key 3   it is an iterator
    cout << "Searching for key 3..." << endl;
    if (it != m.end()) {
        cout << "Found key 3 with value: " << it->second << endl;
    
// all other functions like erase, clear, lower_bound, upper_bound, equal_range, etc. can be used
    } else {
        cout << "Key 3 not found." << endl;
    }
    return 0;

}