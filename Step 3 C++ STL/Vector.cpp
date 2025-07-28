#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    cout << "Vector elements: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }

    cout << endl;
    vec.emplace_back(7); // This will not compile, as emplace_back expects a single argument
    cout << "After emplace_back(7,8): ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
    vec.pop_back();
    vec.pop_back(); // Remove the last two elements
    cout << "After pop_back: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    
    cout << endl;


    cout<<"inserting process";
    vec.insert(vec.begin(), 0); // Insert 0 at the beginning
    cout << "After insert(0) at the beginning: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
    vec.insert(vec.begin() + 2, 10); // Insert 10 at index 2
    cout << "After insert(10) at index 2: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
    cout<<"Same element for multiple times";
    vec.insert(vec.end(), 3, 100); // Insert 100 three times at the end
    cout << "After insert(100, 3 times) at the end: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }


    cout << endl;
    cout<<"Accessing elements";
    cout << "First element: " << vec.front() << endl; // Access first element
    cout << "Last element: " << vec.back() << endl; // Access last element
    cout << "Element at index 2: " << vec.at(2) << endl; // Access element at index 2
    cout << "Element at index 5: " << vec[5] << endl;
    cout << "Size of vector: " << vec.size() << endl; // Get size of vector
    cout << "Capacity of vector: " << vec.capacity() << endl; // Get capacity of vector
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl; // Check if vector is empty
    cout << "Clearing vector." << endl;
    vec.clear(); // Clear the vector
    cout << "Size after clear: " << vec.size() << endl; // Size after clearing
    cout << "Is vector empty after clear? " << (vec.empty() ? "Yes" : "No") << endl; // Check if vector is empty after clearing
    cout << "Resizing vector to 5 elements." << endl;
    vec.resize(5,10); // Resize vector to 5 elements
    cout << "Size after resize: " << vec.size() << endl; // Size after resizing
    cout << "Elements after resize: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    return 0;

}