#include <iostream>
#include <set>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int arr[] = {a,b,c,d};
    set<int> s(begin(arr), end(arr));
    cout << 4 - s.size() << endl;

    return 0;
}