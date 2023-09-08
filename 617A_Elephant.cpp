#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    double ans;
    cin >> x;
    if (x == 5 || x > 5)
    {
        ans = x/5.0;
        cout << ceil(ans) << endl;
    }
    else if (x > 0 || x < 5)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    

    return 0;
}