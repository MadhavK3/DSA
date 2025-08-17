#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec;
    cout << "Using vector in C++ STL" << endl;

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.emplace_back(40);  // Faster insertion than push_back (no copy involved)
    cout << "Elements in vector after adding: ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    } 

    /* Or 
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {          // vec.end();   Returns an iterator to the end of the vector  i.e address of place which is next to last element

        cout << *it << " ";
    }

    or

    for(auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }

    or using for each loop
    for(auto element : vec) {
        cout << element << " ";
    }
    
    */


    // Paired vector
    cout << "\nUsing vector of pairs in C++ STL" << endl;
    vector<pair<int, int>> vecPairs;
    vecPairs.push_back(make_pair(1, 2));
    vecPairs.emplace_back(3, 4);  // Faster insertion than push_back  here you can use emplace_back to construct the pair in place mo object used for emplace_back
    vecPairs.push_back({5, 6}); // Using initializer list to add pairs  i.e {} used no () needed

    cout << "Elements in vector of pairs:" << endl;
    for(auto p : vecPairs) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    //predifened vectors
    vector<int>vp(5,100); // vector of size 5 with all elements initialized to 100
    cout << "Predifined vector elements: ";
    for(auto element : vp) {
        cout << element << " ";
    }                               // Size can be changed later as its dynamic (runtime size)

    cout << endl;
    // Accessing elements
    cout << "First element: " << vec[0] << endl;
    cout << "Second element: " << vec.at(1) << endl;      // at() is safer than [] as it checks bounds
    cout << "Last element: " << vec.back() << endl;       // back()


    // Removing elements
    vec.clear();  // Clear all elements
    cout << "Vector size after clearing: " << vec.size() << endl;
      
   // v.rbegin() and v.rend() are used to iterate in reverse order   v.rbegin() returns a reverse iterator to the last element of the vector, and v.rend() returns a reverse iterator to the position before the first element.
   //  v.back() == v.rbegin()  gives same element as both refer to same last element

   // **************  Erase ****************
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    cout << "Vector elements before erase: ";
    for(auto element : vec) {
        cout << element << " ";
    }
    
    // Erasing the second element (index 1)
    vec.erase(vec.begin() + 1); // Erase at index 1
    cout << "\nVector elements after erasing second element: ";
    for(auto element : vec) {
        cout << element << " ";
    }

    // Erasing a range of elements (first two elements)
    vec.erase(vec.begin(), vec.begin() + 2); // Erase first two elements  its like [Start,End) range
    cout << "\nVector elements after erasing first two elements: ";
    for(auto element : vec) {
        cout << element << " ";
    }

// ************ Insert **************
vec.insert(vec.begin(),5,100);         // First give position then no of times then value
cout << "\nVector elements after inserting 5 times 100 at the beginning: ";
for(auto element : vec) {
    cout << element << " ";
}

    // we can also insert entire vector at a position
    vector<int> vec2 = {50, 60, 70};
    vec.insert(vec.begin() + 1, vec2.begin(), vec2.end()); // Insert vec2 at position 1

    cout << "\nVector elements after inserting vec2 at position 1: ";
for(auto element : vec) {
        cout << element << " ";
    }


    // we have fuctions like swap clear size empty and also we can do copy of vector
    vector<int> vecCopy = vec; // Copying vector like this is shallow copy
    cout << "\nCopied vector elements: ";
    for(auto element : vecCopy) {
        cout << element << " ";
    }


    // *****  This is how we can use vector in C++ STL *****
   return 0;

}