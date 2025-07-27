#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter The No of Rows: ";
    cin >> n;
    char no = 'E';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << no;
            no++;
        }
        no = 'E' - 1 - i;
        cout << endl;
        
    }
    return 0;

}