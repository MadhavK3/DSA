#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter The No of Rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    { int no = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << no;
            no++;
        }
        for (int j = 0; j < (2*n-2)-2*i; j++)
        {
            cout << " ";

        }
        no--;
        for (int j = 0; j <= i; j++)
        {
            cout << no;
            no--;
        }
        cout << endl;
        
        
    }
    
    return 0;

}