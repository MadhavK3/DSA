#include<bits/stdc++.h>
using namespace std;

int reverse_number(int n){
    int reverse = 0;
    while(n > 0){
        reverse = reverse * 10 + n % 10;   // Get the last digit and add it to the reverse
        n /= 10;     // Remove the last digit from n
    }
    return reverse;   // Return the reversed number
}
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
  if (n == reverse_number(n)) {
        cout << n << " is a palindrome." << endl;  // Output if the number is a palindrome
    } else {
        cout << n << " is not a palindrome." << endl;  // Output if the number is not a palindrome
    }
    return 0;

}