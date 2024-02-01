#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Element 
{
    int value;
    int index;
};
bool compareByValue(const Element& a, const Element& b) 
{
    return a.value > b.value;
}

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<Element> elements(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> elements[i].value;
            elements[i].index = i + 1;
        }
        sort(elements.begin(), elements.end(), compareByValue);

        vector<int> permutation(n);

        for (int i = 0; i < n; i++) 
        {
            permutation[elements[i].index - 1] = i + 1;
        }
        for (int i = 0; i < n; i++) 
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
    return 0;
}