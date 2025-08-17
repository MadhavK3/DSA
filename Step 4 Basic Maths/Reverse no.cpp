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
    cin >> n;
  cout << "Reversed number is: " << reverse_number(n) << endl;  // Output the reversed number
    return 0;

}