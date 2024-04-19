/*
用輾轉相除法判斷最大公因數
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b;
    if (b > a)
    {
        swap(a, b);
    }
    while (a % b != 0)
    {
        k = a % b;
        a = b;
        b = k;
    }
    cout << b << endl;
}