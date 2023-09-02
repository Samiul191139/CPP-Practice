#include <iostream>
using namespace std;
int main()
{
    int x = 0,n;
    cin>>n;
    string s;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++") 
        {
            x += 1;
        } 
        else if (s == "--X" || s == "X--") 
        {
            x -= 1;
        }
    }
    cout << x << endl;

    return 0;
}