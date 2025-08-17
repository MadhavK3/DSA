#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first > b.first; // Sort first in descending order
    }
    else {
        return a.second < b.second; // If first is same, sort second in ascending order
    }
}
int main(){

    // Using Algorithms in C++ STL
    // sorting
    cout << "Using Algorithms in C++ STL sorting" << endl;
    vector<int> v = {5, 2, 8, 1, 3};
    cout << "Original vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end()); // Sort the vector in ascending order
    cout << "Sorted vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    // searching
    cout << "Searching for element 3 in sorted vector..." << endl;
    auto it = find(v.begin(), v.end(), 3); // Find element 3    range [begin, end) then value to find
    if (it != v.end()) {
        cout << "Element 3 found at position: " << distance(v.begin(), it) << endl;   // distance gives the index of the element
    } else {
        cout << "Element 3 not found." << endl;
    }

    // counting
    cout << "Counting occurrences of element 1 in vector..." << endl;

    int count = std::count(v.begin(), v.end(), 1); // Count occurrences of element 1   range [begin, end) then value to count
    cout << "Element 1 occurs " << count << " times in the vector." << endl;
    // reversing
    cout << "Reversing the vector..." << endl;
    reverse(v.begin(), v.end()); // Reverse the vector
    cout << "Reversed vector: ";
    for (int x : v) {
        cout << x << " ";
    }
  //  for descending order
    cout << endl;
    sort(v.begin(), v.end(), greater<int>()); // Sort the vector in descending order
    cout << "Sorted vector in descending order: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;



    // we can sort by any condition by using a custom comparator

    vector<pair<int, int>> vp = {{1, 2}, {1, 4}, {5, 6}};
    cout<<"Sort in such a way that first is in descending order and if first is same then second is in ascending order"<<endl;
    sort(vp.begin(),vp.end(),comp);
    cout << "Sorted vector of pairs: ";
    for (auto p : vp) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }




int cnt = __builtin_popcount(5); // Count number of set bits in 5
    cout << "\nNumber of set bits in 5: " << cnt << endl;

    // permutations
    string no = "123";
    cout << "Permutations of string '123':" << endl;
    do{
        cout << no << endl;}while(next_permutation(no.begin(), no.end()));


        cout<<"For getting all combinations of a string we can use next_permutation and sort the string first"<<endl;
    string str = "rdj";
    sort(str.begin(), str.end()); // Sort the string to get combinations in lexicographical order
    cout << "Combinations of string 'abc':" << endl;
    do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    auto max_it = max_element(v.begin(), v.end()); // Find iterator to maximum element   we given range [begin, end) then value to find
    cout << "Maximum element in vector: " << *max_it << endl; 

    auto min_it = min_element(v.begin(), v.end()); // Find iterator to minimum element
    cout << "Minimum element in vector: " << *min_it << endl;
    return 0;

}