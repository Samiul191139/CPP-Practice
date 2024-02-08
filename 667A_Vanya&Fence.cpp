#include <iostream>
using namespace std;
int main()
{
    int n,x, num=0, sum=0;
    cin >> n >> x;
    while (n--)
    {
        cin >> num;
        if (num > x)
        {
            sum += 2;
        }
        else
        {
            sum += 1;
        }
    }
    cout << sum;

    return 0;
}