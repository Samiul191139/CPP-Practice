#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    long double ans = 0.000000000;
    cin >> n;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        ans += k;
    }
    cout << fixed << setprecision(10) << ans/n ;
    return 0;
}