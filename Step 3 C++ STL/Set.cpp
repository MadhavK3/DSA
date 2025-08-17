#include<bits/stdc++.h>
using namespace std;
int main(){

    //Set is a data structure that stores unique elements in a sorted order.
    cout << "Using set in C++ STL" << endl;
    set<int> s; // Set of integers
    // Adding elements to the set
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.emplace(15);  // Faster insertion than insert (no copy involved)
    s.insert(20); // Duplicate element, will not be added
    cout << "Elements in set after adding: ";
    for(auto element : s) {
        cout << element << " ";  // Elements will be printed in sorted order
    }
    cout << endl;


    s.find(15); // Find element 15 in the set 
   // this will return an iterator(address) to the element if found, or s.end() if not found



   //******** Lower and Upper Bound ********
    auto lower = s.lower_bound(10); // Returns an iterator to the first element that is not less than 10       i.e n>=10
    auto upper = s.upper_bound(10); // Returns an iterator to the first element that strictly greater than 10  i.e n>10
 cout<< "lower bound of 10 is:"<<*lower << endl; // will print 10
    cout<< "upper bound of 10 is:"<<*upper << endl; // will print 15
    // element in () is calles as key 
    // if not  found any then it will return s.end() which is the address of the place next to last element
    
    return 0;

}