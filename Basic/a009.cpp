/*
K-C=7 所以將每個編碼往前7格就是正確的編碼
設個很長的陣列 a[1000] 去記輸入的編碼
然後用陣列輸出，只要不是NULL，就輸出輸入的編碼減7
*/
#include <iostream>
using namespace std;
int main()
{
    char a[1000];
    cin >> a;
    for (int i = 0; i < 1000; i++)
    {
        if (a[i] == NULL)
        {
            break;
        }
	    else
        {
            a[i] = char(int(a[i]) - 7);
            cout << a[i];
        }
    }
}