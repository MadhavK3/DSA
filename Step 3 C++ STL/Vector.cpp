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
    return 0;

}