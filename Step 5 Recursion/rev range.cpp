#include<bits/stdc++.h>
using namespace std;

void print(int a,int n){
    if (a >= n){return;}
    cout<<n-a<<"    ";
    print(a+1,n);
    
    
}
int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n; 
    print(0,n);
    return 0;

}