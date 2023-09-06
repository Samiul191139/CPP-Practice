#include <iostream>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> distinctChars;
    for (char c : s) 
    {
        distinctChars.insert(c);
    }
    if (distinctChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    } 
    else 
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}