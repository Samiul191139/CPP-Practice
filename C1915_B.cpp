#include <iostream>
#include <vector>

using namespace std;

bool isValidLatinSquare(vector<vector<char>>& square) 
{
    for (int i = 0; i < 3; ++i) 
    {
        int countRow[3] = {0};
        int countCol[3] = {0};

        for (int j = 0; j < 3; ++j) 
        {
            if (square[i][j] != '?') 
            {
                countRow[square[i][j] - 'A']++;
            }
            if (square[j][i] != '?') 
            {
                countCol[square[j][i] - 'A']++;
            }
        }

        for (int k = 0; k < 3; ++k) {
            if (countRow[k] > 1 || countCol[k] > 1) 
            {
                return false;
            }
        }
    }
    return true;
}

char findReplacedLetter(vector<vector<char>>& square) 
{
    for (int i = 0; i < 3; ++i) {
        int countRow[3] = {0};

        for (int j = 0; j < 3; ++j) 
        {
            if (square[i][j] != '?') 
            {
                countRow[square[i][j] - 'A']++;
            }
        }

        for (int k = 0; k < 3; ++k) 
        {
            if (countRow[k] == 0) 
            {
                return char('A' + k);
            }
        }
    }

    return '\0';
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        vector<vector<char>> square(3, vector<char>(3));

        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                cin >> square[i][j];
            }
        }

        if (!isValidLatinSquare(square)) 
        {
            cout << "Invalid Latin Square" << endl;
            continue;
        }

        char replacedLetter = findReplacedLetter(square);
        cout << replacedLetter << endl;
    }

    return 0;
}
