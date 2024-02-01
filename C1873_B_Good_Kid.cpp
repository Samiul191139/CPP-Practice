#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int a,n,index;
    cin >> a;
    while (a--)
    {
        cin >> n;
        int x[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
        }
        int temp = INT16_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (x[i] < temp)
            {
                temp = x[i];
                index = i;
            }
        }
        x[index] = temp + 1;
        long long product = 1;
        for (int i = 1; i <= n; i++)
        {
            product *= x[i];
        }
        cout << product << endl;
    }
    return 0;
}