#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    int antonCount = 0, danikCount = 0;
    for (int i = 0; i < n; i++)
    {
        if(x[i] == 'A')
        {
            antonCount ++;
        }
        else
        {
            danikCount ++;
        }
    }
    if (antonCount > danikCount)
    {
        cout << "Anton" << endl;
    }
    else if (danikCount > antonCount)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}