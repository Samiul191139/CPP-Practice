#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    vector<vector<int>> arr;

    for (int i = 0; i < t; i++) 
    {
        vector<int> elem(3);
        for (int j = 0; j < 3; j++) 
        {
            cin >> elem[j];
        }
        arr.push_back(elem);
    }

    for (vector<int> test : arr) 
    {
        if (test[1] > test[0] || (test[1] - test[2]) > 1) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            double sum = (0.5) * (test[1] - 1) * (test[1]);
            int rest = test[0] - test[1];
            double sum2 = 0;
            if (test[2] == test[1]) 
            {
                sum2 = rest * (test[2] - 1);
            } 
            else 
            {
                sum2 = rest * (test[2]);
            }
            cout << int(sum + sum2) << endl;
        }
    }

    return 0;
}