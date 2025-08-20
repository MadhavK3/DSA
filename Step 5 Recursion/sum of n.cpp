#include<bits/stdc++.h>
using namespace std;
void sum(int n){
    int sum = 0;
    for (auto i = 1; i <= n; i++)
    {
        sum += i ;
    }
    cout<<"Sum of first "<<n<<" natural numbers is : "<<sum<<endl;
    
}
int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;
    sum(n);
    return 0;

}