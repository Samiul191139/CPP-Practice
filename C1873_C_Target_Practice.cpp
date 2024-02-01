#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        vector<vector<char>> target(10, vector<char>(10));

        // Input the target grid
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> target[i][j];
            }
        }

        int score = 0;

        // Iterate through the target grid
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (target[i][j] == 'X') {
                    int arrows = 0;

                    // Check adjacent cells
                    if (i > 0 && target[i - 1][j] == 'X') arrows++;
                    if (i < 9 && target[i + 1][j] == 'X') arrows++;
                    if (j > 0 && target[i][j - 1] == 'X') arrows++;
                    if (j < 9 && target[i][j + 1] == 'X') arrows++;

                    // Calculate score based on the number of adjacent arrows
                    if (arrows == 0) score += 1;
                    else if (arrows == 1) score += 3;
                    else if (arrows == 2) score += 5;
                    else if (arrows == 3) score += 7;
                    else if (arrows == 4) score += 9;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}