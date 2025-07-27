#include<iostream>
using namespace std;

// void add(int &a) {
//     a+= 10; // This will not change the original value of 'a' in main
//     cout << "Value inside function: " << a << endl;
// }

void ar(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<++a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    // int x =5;
    // int &y = x; // Reference to x
    // y++;
    // cout<<x << endl; // Output will be 6



    // int a;
    // cout << "Enter integer: ";
    // cin>>a;
    // add(a); // Passing by value
    // cout << "Value: " << a << endl;

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ar(arr, n); // Passing by reference to modify the original array
    cout << "Modified array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}