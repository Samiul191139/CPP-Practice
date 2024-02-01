#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int a, b, c;
        cin >> a >> b >> c;

        int result;
        if (a == b) {
            result = c;
        } else if (a == c) {
            result = b;
        } else {
            result = a;
        }

        cout << result << endl;
    }

    return 0;
}