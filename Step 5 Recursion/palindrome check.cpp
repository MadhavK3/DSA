#include<bits/stdc++.h>
using namespace std;
void pdm_check(string a,int i,int n){
if (a[i] != a[n-1-i])
{
   cout<<"Palidrome: ❌";return; 
}
if (i == n/2)
{
    cout<<"Palidrome: ✅";return;
}

pdm_check(a,i+1,n);

}
int main(){

    string a;
    cout<<"Enter string:";cin>>a;
    pdm_check(a,0,a.length());
    return 0;

}