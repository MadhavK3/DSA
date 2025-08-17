#include<bits/stdc++.h>
using namespace std;
int armstrong(int n){
    int sum = 0;
    while(n>0){
        sum += pow(n%10,3); // Calculate the cube of the last digit and add it to sum
        n /= 10; // Remove the last digit from n
    }
    return sum; // Return the sum of cubes of digits
}
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == armstrong(n)) {
        cout << n << " is an Armstrong number." << endl; // Output if the number is an Armstrong number
    } else {
        cout << n << " is not an Armstrong number." << endl; // Output if the number is not an Armstrong number
    }

    return 0;

}