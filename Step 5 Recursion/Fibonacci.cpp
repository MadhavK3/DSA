#include<bits/stdc++.h>
using namespace std;

// This is efficient method els we can store it in array so TC increases

void fibo(int n,int f,int s){
    if (n == 0){return;}
    
  if(s==0 && f == 1){
    cout<<0<<"  "<<1<<"  ";
  }
   else{cout<<f+s<<"  ";}
   
   fibo(n-1,s,f+s);

    

}
int main(){
int n;
cout<<"Enter No of terms: ";cin>>n;
fibo(n,1,0);
    
    return 0;

}