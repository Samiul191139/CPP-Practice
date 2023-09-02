#include <iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c,num = 0;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        if (a+b+c >= 2)
        {
            num += 1;
        }
    }
    cout << num << endl;
    
    return 0;
}