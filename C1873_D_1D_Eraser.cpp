#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> operations;

        int consecutive_black = 0;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == 'B') 
            {
                consecutive_black++;
            } 
            else 
            {
                if (consecutive_black > 0) 
                {
                    operations.push_back(consecutive_black);
                }
                consecutive_black = 0;
            }
        }

        if (consecutive_black > 0) 
        {
            operations.push_back(consecutive_black);
        }

        int min_operations = 0;
        while (!operations.empty()) 
        {
            int max_block = operations.back();
            operations.pop_back();
            min_operations++;
            if (max_block > k) 
            {
                operations.push_back(max_block - k);
            }
        }

        cout << min_operations << endl;
    }

    return 0;
}