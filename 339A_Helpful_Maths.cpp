#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 2; j < s.size(); j += 2) 
        {
            if (s[i] > s[j]) 
            {
                swap(s[i], s[j]);
            }
        }
        
    }
    cout<<s<<endl;

    return 0;
}