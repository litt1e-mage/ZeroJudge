/*
用while迴圈尋找第一個字串有多長 （及第一項NULL）
然後用第二個字串存原本的第一個字串
接著把第一個字串翻轉
然後判斷如果y和x是否相同
*/
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string x, y;
    int index = 0;
    while (cin >> x) {
        while (x[index] != '\0')
        {
            index += 1;
        }
        y = x;
        reverse(&x[0], &x[index]);
        if (y == x) {
            cout << "yes\n";
        }
        else
        {
        cout << "no\n";
        }
    }
}