#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter The No of Rows: ";
    cin >> n;
    
      for (int i = 0; i < 2*n-1; i++)
      {
        
        for (int j = 0; j < 2*n-1; j++)
        {
       
            int top = i;
            int left = j;
            int right = (2*n-1) - j - 1;
            int bottom = (2*n-1) - i - 1;
            int minValue = min(min(top, left), min(right, bottom));
            cout << n - minValue << " ";
            
                          
        }
        cout << endl;
        
      }
        
        
    
    return 0;

} 