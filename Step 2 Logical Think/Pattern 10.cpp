#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No Of Rows: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
    if(i==n)
    {
      i=0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
               cout << "*";
            }
            cout << endl;
        }
        return 0;
    }

    for (int j = 0; j <= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }

    return 0;

}