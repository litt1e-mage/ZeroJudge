/*
輸入身分證字號，先用switch轉換第一項，轉換完後換數字
然後依序加總各項，最後判斷是否可備10整除
*/
#include <iostream>
using namespace std;
int main()
{
    char s[11];
    int n[11];
    int sum;
    cin >> s;
    sum = 0;
    switch (s[0])
    {
        case 'A':
            n[0] = 1;
            n[1] = 0;
            break;
        case 'B':
            n[0] = 1;
            n[1] = 1;
            break;
        case 'C':
            n[0] = 1;
            n[1] = 2;
            break;
        case 'D':
            n[0] = 1;
            n[1] = 3;
            break;
        case 'E':
            n[0] = 1;
            n[1] = 4;
            break;
        case 'F':
            n[0] = 1;
            n[1] = 5;
            break;
        case 'G':
            n[0] = 1;
            n[1] = 6;
            break;
        case 'H':
            n[0] = 1;
            n[1] = 7;
            break;
        case 'I':
            n[0] = 3;
            n[1] = 4;
            break;
        case 'J':
            n[0] = 1;
            n[1] = 8;
            break;
        case 'K':
            n[0] = 1;
            n[1] = 9;
            break;
        case 'L':
            n[0] = 2;
            n[1] = 0;
            break;
        case 'M':
            n[0] = 2;
            n[1] = 1;
            break;
        case 'N':
            n[0] = 2;
            n[1] = 2;
            break;
        case 'O':
                n[0] = 3;
            n[1] = 5;
            break;
        case 'P':
            n[0] = 2;
            n[1] = 3;
            break;
        case 'Q':
            n[0] = 2;
            n[1] = 4;
            break;
        case 'R':
            n[0] = 2;
            n[1] = 5;
            break;
        case 'S':
            n[0] = 2;
            n[1] = 6;
            break;
        case 'T':
            n[0] = 2;
            n[1] = 7;
            break;
        case 'U':
            n[0] = 2;
            n[1] = 8;
            break;
        case 'V':
            n[0] = 2;
            n[1] = 9;
            break;
        case 'W':
            n[0] = 3;
            n[1] = 2;
            break;
        case 'X':
            n[0] = 3;
            n[1] = 0;
            break;
        case 'Y':
            n[0] = 3;
            n[1] = 1;
            break;
        case 'Z':
            n[0] = 3;
            n[1] = 3;
            break;
        default:
            n[0] = 0;
            n[1] = 0;
            break;
    } // end switch
    for (int i = 2; i <= 10; i++)
    {
        n[i] = int(s[i - 1]) - 48; // ASCII
    }
    sum += n[0];
    for (int i = 1; i <= 9; i++)
    {
        sum = sum + (n[i] * (10 - i));
    }
    sum += n[10];
    if (sum % 10 == 0)
    {
        printf("real\n");
    }
    else
    {
        printf("fake\n");
    }
}