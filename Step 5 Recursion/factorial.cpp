#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n < 0){
        cout<<"Factorial of negative number is not defined."<<endl;
        return 0 ;
    }
    if(n == 0 || n == 1){
        return 1;
    }
    
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
        
    }
    return result;
    
}
int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;
   cout<<"Factorial of "<<n<<" is : "<<fact(n)<<endl;
    return 0;

}