/*
使用函式roma_to_int()將羅馬數字依序轉換成整數，並依序加總
如果前面的數字比後面的數字小，就減兩次前面的數字 Ex. IV = 1 + 5 - 2 * 1 = 4

算完之後將大數減小數的結果設為x，如果為0則輸出"ZERO"，否則使用int_to_roma()轉回羅馬數字
index設為0，並用for迴圈從大到小去搜減完的數字除以num[i]，i每次遞減2（這樣才可避免掉9為IX而非VIV的狀況）
如果ans=9，a[index] = rom[i]，a[index + 1] = rom[i + 2]，index += 2，x -= 9 * num[i] Ex.IX
如果5<=ans<9，a[index] = rom[i+1]，index += 1，x -= num[i+1]，i += 2 
（算完後重跑一次迴圈，已執行底下內容）
如果ans=4，a[index] = rom[i]，a[index + 1] = rom[i + 1]，index += 2，x -= 9 * num[i] Ex.IV
如果ans<4，用for迴圈執行ans次，a[index] = rom[i]，index += 1，x-=num[i] Ex.III
算完後回傳index

接著依序從0到index-1輸出陣列a[i]裡的內容
輸出完後初始化a，b

*/
#include <iostream>
using namespace std;
int num[7]={ 1 , 5 , 10 , 50 , 100 , 500 , 1000};
char rom[7]={'I' , 'V' , 'X' , 'L' , 'C' , 'D' , 'M' };
char a[20];
char b[20];
int x, y;

int roma_to_int(char a[])
{
	int tmp;
	int arr[20]={0};
	for(int i = 0;i < 20;i++)
	{
		for(int j = 0;j < 7;j++)
		{
			if(a[i] == rom[j])
			{
				arr[i] = num[j];
				break;
			}
		}
	}
	tmp = arr[0];
	for(int i = 1;i < 20;i++)
	{
		tmp += arr[i];
		if (arr[i]>arr[i-1]){
			tmp -= 2 * arr[i-1];
		}
	}
	return tmp;
}

int int_to_roma(int x)
{
	int index;
	index = 0;
	for(int i = 6;i >= 0;i-=2)
	{
		if (x / num[i] == 9)
		{
			a[index] = rom[i];
			index++;
			a[index] = rom[i+2];
			index++;
			x -= 9 * num[i];
		}
		else if (x / num[i] >= 5)
		{
			a[index] = rom[i+1];
			index++;
			x -= num[i+1];
			i += 2;
		}
		else if (x / num[i] == 4)
		{
			a[index] = rom[i];
			index++;
			a[index] = rom[i+1];
			index++;
			x -= num[i]*4;
		}
		else
		{
			for(int j = x / num[i];j > 0;j--)
			{
				a[index] = rom[i];
				index++;
				x -= num[i];
			}
		}
	}
	return index;
}

int main ()
{
	int index;
	while (1)
	{
		scanf("%s", a );
		if (a[0] == '#')
		{
			break;
		}
		scanf("%s", b );
		x = roma_to_int(a);
		y = roma_to_int(b);
		//printf("%d %d\n", x, y);
		if (x < y)
		{
			swap(x , y);
		}
		x -= y;
		if (x == 0)
		{
			printf("ZERO\n");
		}
		else
		{
			index=int_to_roma(x);
			for(int i = 0;i < index;i++)
			{
				printf("%c", a[i]);
			}
			printf("\n");
		}
		//初始化
		for(int i = 0; i < 20 ;i++)
		{
			a[i] = ' ';
			b[i] = ' ';
		}
	}
}