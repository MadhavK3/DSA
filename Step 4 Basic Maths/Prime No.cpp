#include<bits/stdc++.h>
using namespace std;

void normal(int n){
    int div = 0;
    for (auto i = 1; i <= n ; i++)
    {
       if (n % i == 0) {
            div++;
        }
    }
    (div == 2) ? cout << "Prime Number" : cout << "Not a Prime Number";
}


void optimum(int n){
    int div = 0;
    for (auto i = 1; i <= sqrt(n) ; i++)
    {
       if (n % i == 0) {
            div++;
            if (i != n / i) {
                div++;
            }
        }
    }
    (div == 2) ? cout << "Prime Number" : cout << "Not a Prime Number";
}
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<"\nUsing normal function to check prime number Time complexity of O(n)\n";
    normal(n); 
    cout << "\n\nUsing optimum function to check prime number Time complexity of O(sqrt(n))\n";
    optimum(n);

    return 0;

}