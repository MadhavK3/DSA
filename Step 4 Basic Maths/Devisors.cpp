#include<bits/stdc++.h>
using namespace std;

void normal(int n){
    for (auto i = 1; i <= n ; i++)
    {
       if (n % i == 0) {
            cout << i << " "; // Print the divisor
        }
    }
    
}

void optimized(int n){
    for (auto i = 1; i <= sqrt(n) ; i++)
    {
       if (n % i == 0) {
            cout << i << " "; // Print the divisor
            if (i != n / i) { // Check to avoid printing the square root twice
                cout << n / i << " "; // Print the corresponding divisor
            }
        }
    }
    
}

void optimised_sorted(int n){
    vector<int>divisors;
    for (auto i = 1; i <= sqrt(n) ; i++)
    {
       if (n % i == 0) {
            divisors.push_back(i); // Store the divisor
            if (i != n / i) { // Check to avoid storing the square root twice
               divisors.push_back(n / i); // Store the corresponding divisor
            }
        }
    }
    sort(divisors.begin(), divisors.end()); // Sort the divisors
    for (auto d : divisors) {
        cout << d << " "; // Print the sorted divisors
    }
}
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<"\nUsing normal function to print divisors of a number Time complexity of O(n)\n";
    cout << "Divisors of " << n << " are: ";
    normal(n); // Call the function to print divisors

    cout << "\n\nUsing optimized function to print divisors of a number Time complexity of O(sqrt(n))\n";
    cout << "Divisors of " << n << " are: ";
    optimized(n); // Call the function to print divisors

    cout << endl; // Print a newline for better readability
    

    cout<<"\n\nOptimised with sorted" << endl;
    cout << "Divisors of " << n << " are: ";
    optimised_sorted(n); // Call the function to print sorted divisors

    return 0;

}