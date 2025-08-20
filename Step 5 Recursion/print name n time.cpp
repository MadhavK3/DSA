#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n <= 0) return; // Base case: if n is less than or equal to 0, stop recursion
    cout << "Madhav" << " "; // Print the name
    print(--n); // Recursive call with n decremented by 1

}
int main(){
   int n;
   cout<<"Enter N : ";cin>>n;
    print(n);
    return 0;

}