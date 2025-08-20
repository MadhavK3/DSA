#include<bits/stdc++.h>
using namespace std;

// for array only call reference occurs

void reverse(int arr[],int n){
    int arr_rev[n];
 for (auto i = 0; i < n; i++)
 {
    arr_rev[i] = arr[n-i-1];
 }
  
 cout<<"Reversed array is: ";
 for (auto i = 0; i < n; i++)
 {
 cout<<arr_rev[i]<<"  ";
 }
}


void swap_by_recursion(int i,int e,int *arr){
if (i == e){return;}
 int temp = arr[i];
arr[i] = arr[e];
arr[e] = temp;
swap_by_recursion(i+1,e-1,arr);
}

void f_swap(int i,int arr[],int n){
    if (i == n/2){return;}
    swap(arr[i],arr[n-1-i]);
    f_swap(i+1,arr,n);
}
int main(){
    int n ;
    cout<<"Enter size: ";cin>>n;
    int arr[n];
    cout<<"Enter Data: ";
    for (auto i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //reverse(arr,n);
   // swap_by_recursion(0,n-1,arr);
 
   f_swap(0,arr,n);
    for (auto i = 0; i < n; i++)
 {
 cout<<arr[i]<<"  ";
 }
    return 0;

}