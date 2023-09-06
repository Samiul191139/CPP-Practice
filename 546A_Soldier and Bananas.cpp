#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin >>k >>n >>w;
    int totalCost = (w * (w + 1) / 2) * k;
    int borrowAmount = max(0, totalCost - n);

    cout << borrowAmount << endl;
    return 0;
}