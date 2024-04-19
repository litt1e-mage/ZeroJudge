/*
如範例
2*3
{{3 , 1 , 2} ,
 {8 , 5 , 4}}
翻轉完會變
3 8
1 2
5 4
也就是輸出
arr[0][0]，arr[1][0]
arr[0][1]，arr[1][1]
arr[0][2]，arr[1][2]
也就是用for i循環n次
     和for j循環m次
輸出[j][i]
*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
	int x[100][100];
    while (cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << x[j][i] << " ";
            }
            cout << "\n";
        }
    }
}