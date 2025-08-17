#include<bits/stdc++.h>
using namespace std;
int main(){

    // Queue is a FIFO data structure (First In First Out)
    cout << "Using queue in C++ STL" << endl;
    queue<int> q;
    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.emplace(30);  // Faster insertion than push (no copy involved)
    cout << "Elements in queue after adding: ";
    // Displaying elements in the queue
    
    return 0;

}