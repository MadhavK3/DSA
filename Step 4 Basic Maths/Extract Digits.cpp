#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    vector<int> digits;
    while(n > 0){
        digits.push_back(n % 10);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());
    cout << "Digits in the number are: ";
   for(auto it :digits){
        cout << it << " ";
    }
    return 0;

}