#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
   for(int i = min(a, b); i >= 1; i--) {
       if (a % i == 0 && b % i == 0) {
           return i;
       }
   }
    return 1; // If no common divisor found, return 1
}

int GCD_Euclidean(int a, int b) {
   while(a>0 &&b>0)
   {
    if(a>b){
        a = a % b;
    }
    else{
        b = b % a;
    }
 }
    if(a == 0) {
        return b;
    }
    return a;

   
}
int main(){

    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"GCD of "<<n1<<" and "<<n2<<" is (Using Normal Method): "<<GCD(n1, n2)<<endl;

    // Using Euclidean Algorithm
    // According to Maths GCD(a,b) = GCD(a-b,b) if a > b
    // by Doing this in chain we get lowest eg GCD(52,10) -> GCD(42,10) -> GCD(32,10) -> GCD(22,10) -> GCD(12,10) -> GCD(2,10) -> GCD(2,8) -> GCD(2,6) -> GCD(2,4) -> GCD(2,2) -> 2
    // So we can use this to find GCD in a better way
    // we have theorem that GCD(a,b) = GCD(b,a%b) if a > b

    cout<<"GCD of "<<n1<<" and "<<n2<<" is (Using Euclidean Method): "<<GCD_Euclidean(n1, n2)<<endl;

    // Time Complexity:
    // Normal Method: O(min(a,b))
    // Euclidean Method: O(log(min(a,b)))
    return 0;

}