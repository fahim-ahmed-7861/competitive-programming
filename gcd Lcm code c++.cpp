// CPP program to illustrate
// gcd function of C++ STL
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a=__gcd(6, 20);
	cout << "gcd(6, 20) = " << a << endl;

	int lcm=(6*20)/a;

	cout << "lcm(6, 20) = " << lcm << endl;
}
