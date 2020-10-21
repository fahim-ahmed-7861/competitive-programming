
#include<bits/stdc++.h>

using namespace std;

int main()
{
	double r,s,c,area;
	int t,i;

	cin>>t;

	for (i =1; i<= t; i++) {

		cin>>r;

		c = 2 * acos(0.0) * r * r;

		s = 4*r*r;

		area = s-c;

		printf("Case %d: %.2lf\n",i, area);
	}


}
