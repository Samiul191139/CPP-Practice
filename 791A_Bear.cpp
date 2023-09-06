#include <iostream>
using namespace std;
int main()
{
    int a,b, count = 1;
    cin>>a>>b;
    for (int i = 0; i < 10; i++)
    {
        a = a*3;
        b = b*2;
        if (a > b)
        {
            break;
        }
        else
        {
            count ++;
        }
    }
    cout << count << endl;
    return 0;
}