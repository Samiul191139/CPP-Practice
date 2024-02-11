#include <iostream>
using namespace std;
int main()
{
    int n,count1 = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            //cout << x << endl;
            count1++;
        }
    }
    if (count1 > 0)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}