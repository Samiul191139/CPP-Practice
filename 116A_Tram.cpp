#include <iostream>
using namespace std;
int main()
{
    int n, a, k;
    cin >> n;
    int x = 0, y = 0, min = 0;
    while (n>x)
    {
        cin >> a >> k;
        y = (y-a)+k;
        if (y > min)
        {
            min = y;
        }
        x++;
    }
    cout << min;
    return 0;
}