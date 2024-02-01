#include <iostream>
using namespace std;
int main()
{
    int t;
    std::cin >> t;

    while (t--) 
    {
        int n;
        std::cin >> n;
        if (n % 3 == 0) 
        {
            std::cout << "Second\n";
        } 
        else 
        {
            std::cout << "First\n";
        }
    }

    return 0;
}