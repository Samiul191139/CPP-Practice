#include <iostream>
using namespace std;
int main()
{
    int n=0,k=0,r;
    cin >> n >>k;
    for (int i = 1; i <= k; i++)
    {
        r = n%10;
        if (r == 0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
    }
    cout << n;
    
    return 0;
}