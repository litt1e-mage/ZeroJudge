#include <iostream>
using namespace std;
int main() {
    int year;
    while (cin >> year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) //被4整除且不被100整除，或被400整除者即為閏年
        {
            cout << "閏年" << endl;
        }
		else
        {
            cout << "平年" << endl;
        }
    }
}