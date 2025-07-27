#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter The No of Rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       char no = 'A';
       for (int j = 0; j <= i; j++)
       {
        cout << no;
        no++;
       }
       cout<<endl;
    }
    
    return 0;

}