#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m = 3;
    float x;
    cin >> n;
    int a[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] == a[1])
        {
            cout << "0" << endl;
        }
        else if (a[0]+a[1] < a[2] || a[0]+a[1] == a[2])
        {
            cout << "1" << endl;
        }
        else if (a[0]+a[1] > a[2])
        {
            double x = abs(a[0] - a[1]);
            x /= (2.0 * a[2]);
            cout << ceil(x) << endl;
        }
    }
    return 0;
}