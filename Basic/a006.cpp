#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (pow(b, 2) - (4 * a * c) == 0)       //d=0
    {          
		cout << "Two same roots x=" << (-1 * b) / (2 * a);
	} 
	else if (pow(b, 2) - (4 * a * c) < 0)   //d>0
    {      
		cout << "No real root";
	}
	else                                    //d>0
    {                                       
		cout << "Two different roots x1=" << (((-1 * b) + sqrt((b * b - (4 * a * c)))) / (2 * a)) << " , x2=" << (((-1 * b) - sqrt((b * b - (4 * a * c)))) / (2 * a));
	}
	return 0;
}