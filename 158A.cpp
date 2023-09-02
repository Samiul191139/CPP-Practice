#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n >>k;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= s[k-1] && s[i] != 0)
        {
            count += 1;
        }
    }
    cout << count <<endl;
    return 0;
}