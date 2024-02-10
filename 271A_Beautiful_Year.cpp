#include <iostream>
//#include <>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = true;
    while (i == true)
    {
        n++;
        //cout << n << endl;
        int a,b,c,d , x;
        x = n;
        a = x%10;
        x /= 10;
        b = x%10;
        x /= 10;
        c = x%10;
        x /= 10;
        d = x%10;
        //cout << a << " "<< b << " "<< c <<" "<< d <<endl;
        if ((a!=b) && (b!=c) && (c!=d) && (a!=c) && (b!=d) && (a!=d))
        {
            i = false;
        }
        
    }
    cout << n;
    return 0;
}