#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter The No of Rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout << " ";
        }
        char no = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << no;
            no++;
        }
        no -= 2;
        for (int j = 0; j < i ; j++)
        {
            cout << no;
            no--;
        }
        cout << endl;
        
    }
    
    return 0;

}