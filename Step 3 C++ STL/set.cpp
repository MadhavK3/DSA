#include<bits/stdc++.h>
using namespace std;
int main(){

    set <int> a;
    for(int i=1;i<=10;i++)
    {
        a.insert(i);
    }
    cout << "Elements present in the set: ";
    for (auto it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";

    }

    cout << endl;
    int n = 2;
    if (a.find(2) != a.end())
        cout << n << " is present in set" << endl;
    else
        cout << n << " is not present in set" << endl;
    a.erase(a.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "The size of the set is: " << a.size() << endl;
    if (a.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;
    a.clear();
    cout << "Size of the set after clearing all the elements: " << a.size() << endl;
    if (a.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;


    return 0;

}