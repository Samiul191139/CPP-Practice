#include <iostream>
using namespace std;
int main()
{
    string a,b;
    int n;
    cin >> a >> b;
    n = a.length();
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != b[i])
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    cout << endl;
    return 0;
}