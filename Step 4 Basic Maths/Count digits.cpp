#include<bits/stdc++.h>
using namespace std;
int count_digits1(int n)      // Time Complexity: O(1) for log10, O(log n) for division method
{
    if (n == 0) return 1; // Zero has 1 digit
    if(n < 0) n = -n; // Handle negative numbers
    return log10(abs(n)) + 1; // Use abs for negative numbers
}


int count_digits2(int n)
 {
    if (n == 0) return 1;     // Zero has 1 digit
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count_d = count_digits1(n);
    int count_d2 = count_digits2(n);
    cout << "Number of digits in " << n << " using log10 is: " << count_d << endl;
    cout << "Number of digits in " << n << " using division is: " << count_d2 << endl;
    return 0;

}