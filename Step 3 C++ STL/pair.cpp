#include<iostream>
using namespace std;
int main(){

    pair<int, char> p1(10, 'A');
    pair<int, char> p2 = make_pair(20, 'B');
    cout << "p1.first: " << p1.first << ", p1.second: " << p1.second << endl;
    cout << "p2.first: " << p2.first << ", p2.second: " << p2.second << endl;

    pair<int, pair<int,int>> p3 = {30, {40, 50}};
    cout << "p3.first: " << p3.first << ", p3.second.first: " << p3.second.first << ", p3.second.second: " << p3.second.second << endl;
   
   pair<int,int>arr[] = { {1, 2}, {3, 4}, {5, 6} };
    cout << "Array of pairs:" << endl;
    for (const auto& p : arr) {
        cout << "First: " << p.first << ", Second: " << p.second << endl;
    }

    return 0;

}
