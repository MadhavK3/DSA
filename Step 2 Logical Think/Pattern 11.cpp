#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter No of rows: ";
    cin >> n;
    int no = 1;
    for (int i = 1; i <= n; i++)
    {
         if (i % 2 == 0)
         {
            no = 0; 
         }
         else
         {
            no = 1; 
         }
         
         
       for (int j = 1; j <= i; j++)
       {
            cout << no ;
            if (no == 1)
            {
                no = 0; 
            }
            else
            {
                no = 1; 
            }
       }
       cout << endl;
    }
    
    return 0;

}