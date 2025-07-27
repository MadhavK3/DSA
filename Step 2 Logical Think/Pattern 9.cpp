#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter No Of Rows: ";
    cin >> n;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <=i; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << endl;
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <n-i; k++)
        {
            cout << "*";
        }
        for (int l = 0; l <n-i-1; l++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    return 0;

}