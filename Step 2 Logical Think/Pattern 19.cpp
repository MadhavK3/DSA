#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter The No of Rows: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
         if (i == n)
        {
            for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           cout << "*";
        }
        for (int j = 0; j < 2*(n-1)-2*i; j++)
        {
          cout << " ";  
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
        
    }
    return 0;
        }
        for (int j = 0; j < n-i; j++)
        {
           cout << "*";
        }
        for (int j = 0; j < 2*i; j++)
        {
          cout << " ";  
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
       
        
        
    }

    
    
    return 0;

}