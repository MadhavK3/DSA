#include<bits/stdc++.h>
using namespace std;

void print(int a,int n){
    if(a > n) return; // Base case: if a is greater than n, stop recursion
    cout<<a<<"  ";
    print(a+1,n);
}
int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;
    print(1,n);
    return 0;

}