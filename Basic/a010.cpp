/*
輸入數字a，並做質因數分解
開個int陣列index[20]去存這個數的質因數分解式
基數項為常數，偶數項為該常數的次方

用for迴圈從2開始一個一個判斷是否可以被整除算(很慢我知道，但我懶www)，
若可以的話將該數存到arr[index]裡，index++，接著算a可以被該數的幾次
方整除，並存入arr[index]裡，index++。整個迴圈重複直到i>a

算完後便依序輸出，如果次方項大於1就輸出"^"和該次方項，反之則否
若這組常數不是最後一項，便輸出" * "
*/
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  int arr[20]; // 20因應題目而定
  int index = 0;
  int temp = 0;
  for (int i = 2; i <= a; i++)
  {
    if (a % i == 0)
    {
      arr[index] = i;
      index += 1;
      temp = 0;
      while (a % i == 0)
      {
        a /= i;
        temp += 1;
      }
      arr[index] = temp;
      index += 1;
    }
  }
  for (int i = 0; i < index; i++)
  {
    cout << arr[i];
    i += 1;
    if (arr[i] > 1)
    {
      cout << '^' << arr[i];	
    }
    if (i + 1 != index)
    {
      cout << " * ";
    }
  }
}