/*
用while迴圈去轉換成二進制
x[index] = n % 2
n /= 2
index ++
然後在由後往前輸出（因為小的存在頭，大的存在尾）
EX 13
13 % 2 = 1  [1]
13 / 2 = 6
6 % 2 = 0   [1,0]
6 / 2 = 3
3 % 2 = 1   [1,0,1]
3 / 2 = 1
1 % 2 = 1   [1,0,1,1]
由後往前輸出則是1101 2 ^ 3 + 2 ^ 2  + 2 ^ 0 = 8 + 4 + 1 = 13
*/
#include <iostream>
using namespace std;
int main()
{
	int n = 0, i = 0, index;
	bool x[31];
	int tmp;
	while (cin >> n)
	{
		index = 0;
		while (n > 0)
		{
			x[index] = n % 2;
			n /= 2;
			index++;
		}
		for (int i = index - 1; i >= 0; i--)
		{
			cout << x[i];
		}
		cout << "\n";
	}
}