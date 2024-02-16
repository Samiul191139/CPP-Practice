#include <iostream>
using namespace std;
int main()
{
    long n;
    int ans;
    cin >> n;
    if (n%2 == 0)
    {
        ans = n/2;
    }
    else
    {
        ans = (n/2)-n;
    }
    cout << ans;
    return 0;
}