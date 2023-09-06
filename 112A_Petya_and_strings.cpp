#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    for(std::size_t i = 0; i<a.size(); i++)
    {
        if (a[i] < 92)
        {
            a[i] += 32;
        }
        if (b[i] < 92)
        {
            b[i] += 32;
        }
    }
if (a<b)
{
    cout<<-1;
}
if (b<a)
{
    cout<<1;
}
if (a==b)
{
    cout<<0;
}
return 0;
}