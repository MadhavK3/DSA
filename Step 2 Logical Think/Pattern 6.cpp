#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter No of Rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no =1;
        for (int j = 0; j < n-i; j++)
        {
            cout << no ;
            no++;
        }
        cout << endl;
    }
    return 0;

}