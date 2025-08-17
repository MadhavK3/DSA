#include<bits/stdc++.h>
using namespace std;
int main(){
// stack is a LIFO data structure (Last In First Out)
    cout << "Using stack in C++ STL" << endl;
    stack<int> st;
    // Adding elements to the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.emplace(40);  // Faster insertion than push (no copy involved)
    cout << "Elements in stack after adding:you can see the last element added first" << endl;

    // pop removes the last element added as it is LIFO
    while(!st.empty()) {
        cout << st.top() << " ";  // top() returns the last element added
        st.pop();  // pop() removes the last element
    }
cout<<"\nStack is empty now-";  // Now stack is empty
cout<<st.size();  // size will be 0 now
    // in this we cant acces any element in the middle as it is not allowed in stack like st[0] or st.at(1) etc is invalid 
    cout << endl;
    // Accessing elements
    // cout << "First element: " << st.top() << endl;  // top() returns the last element added
    // cout << "Stack size: " << st.size() << endl;  // size
    // cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;  // empty() checks if the stack is empty
    // Removing elements
    // st.pop();  // Removes the last element added
    // cout << "Stack size after popping: " << st.size() << endl;  // size after popping
    // st.clear();  // Clear all elements (not available in stack)
    return 0;

}