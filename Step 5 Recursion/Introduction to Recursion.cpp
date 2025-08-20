#include<bits/stdc++.h>
using namespace std;


// This program demonstrates infinite recursion.
// Rule: A function that calls itself without a base case will lead to infinite recursion.
void print(){
    cout<<1<<" ";
    print();
}

// this is finite with base condition
void print2(int n){
    
    cout<<2<<" ";
    n++;
    if(n < 5) {print2(n);}

// Stack space = yet to be complete
    
}
int main(){
int count = 0;
    print2(count);
    // This will cause a stack overflow due to infinite recursion.
    return 0;

}