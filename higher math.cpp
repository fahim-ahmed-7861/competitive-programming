#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        long long int a[10];

        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);

        sort(a,a+3);

		if((a[0] * a[0] + a[1] * a[1]) == (a[2] * a[2])) {
			printf("Case %d: yes\n", i);
		}

		else {
			printf("Case %d: no\n", i);
		}
    }
    return 0;
}
