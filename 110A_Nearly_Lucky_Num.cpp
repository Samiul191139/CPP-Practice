#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int luckycount = 0;
    while (n != 0)
    {
        int r = n%10;
        if (r == 4 || r == 7)
        {
            luckycount ++;
        }
        n /= 10;
    }
    if (luckycount == 4 || luckycount == 7)
        {
            cout << "YES" << endl;
        }
    else
        {
            cout << "NO" << endl;
        }
    
    return 0;
}