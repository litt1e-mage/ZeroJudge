#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << a << " " << b << " " << c << " " << d << " ";
        if ((b - a) == (c - b)) //等差
            cout << d + (d - c) << "\n";
        else //等比
            cout << d * (d / c) << "\n";
    }
}