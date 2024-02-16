#include <iostream>
using namespace std;
int main()
{
    int n,p[100000],count = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (p[i] != p[i+1])
        {
            count++;
        }
    }
    
    cout << count;
    

    return 0;
}