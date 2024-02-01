#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s, result;
    cin >> s;
    int upp = 0, low = 0;
    for (char c : s)
    {
        if (isupper(c))
        {
            upp++;
        }
        else if (islower(c))
        {
           low++;
        }
    }
    if (upp < low || upp == low)
    {
        for (char c : s)
        {
            result += tolower(c);
        }
    }
    else if (upp > low)
    {
        for (char c : s)
        {
            result += toupper(c);
        }
    }
    cout << result << endl;
    return 0;
}