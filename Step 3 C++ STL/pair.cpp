#include<bits/stdc++.h>
using namespace std;
int main(){
// For single pair
    cout << "Using pair in C++ STL" << endl;
    pair<int,int> p;
    p = make_pair(10, 20);
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    // For Array of pairs
    pair<int, int> arr[3];
    arr[0] = make_pair(1, 2);
    arr[1] = make_pair(3, 4);
    arr[2] = make_pair(5, 6);
    cout << "Array of pairs:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Pair " << i + 1 << ": (" << arr[i].first << ", " << arr[i].second << ")" << endl;
    }

    return 0;

}