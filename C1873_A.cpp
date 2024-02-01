#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string cards;
        cin >> cards;
        if (cards == "abc" || cards == "cba" || cards == "bac") 
        {
            cout << "YES" << endl;
        }
        else if ((cards[0] == 'a' && cards[2] == 'b') || (cards[0] == 'c' && cards[2] == 'a')) {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}