#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    (age < 18)? cout<<"You are a minor." : cout<<"You are an adult.";
    return 0;
}