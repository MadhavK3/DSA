#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<< "Using unsorted set in C++ STL  only unique no sorting" << endl;
    unordered_set<int> us; // Unordered set of integers
    // Adding elements to the unordered set
    us.insert(10);
    us.insert(20);
    us.insert(5);
    us.emplace(15);  // Faster insertion than insert (no copy involved)
    us.insert(20); // Duplicate element, will not be added
    cout << "Elements in unordered set after adding: ";
    for(auto element : us) {
        cout << element << " ";  // Elements will be printed in no particular order
    }
    cout << endl;
    // All other functions like size, empty, swap, etc. are also available just like Set
    // No Lower and Upper Bound in unordered set as it is not sorted
    return 0;

}