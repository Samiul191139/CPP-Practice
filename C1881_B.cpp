#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int lengths[] = {a, b, c};
        sort(lengths, lengths + 3);

        if (lengths[1] - lengths[0] == 0 && lengths[2] - lengths[1] == 1)
        {
            cout << "NO" << endl;
        }
        else if (lengths[1] - lengths[0] == 0 && (lengths[0] + lengths[1] >= lengths[2] - 1))
        {
            cout << "YES" << endl;
        }
        else if ((lengths[2] - lengths[1]) == (lengths[1] - lengths[0]) || (lengths[2] - lengths[1]) <= (lengths[1] - lengths[0]))
        {
            cout << "YES" << endl;
        }
        
        else if ((lengths[0] == lengths[1] && lengths[1] == lengths[2]) || (lengths[1] - lengths[0] <= 1)) 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}