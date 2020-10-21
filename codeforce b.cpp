#include<bits/stdc++.h>
using namespace std;

int ara[100100];

int bsearch(int n, int x)
{
	int low = 0, high = n, mid, pos = -1;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(ara[mid] == x)
		{
			pos = mid;
			low = mid + 1;
		}
		else if(ara[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}

	if(pos != -1)
		return pos;
	else
		return low - 1;
}


int main()
{

	int  i, q,J, K, N, n, m, cnt = 0, len, x, ans, Q;

	cin>>n;

	for(i = 1; i <= n; i++)
		cin>>ara[i];

	sort(ara , ara + n );

	cin>>q;
	for(i = 0; i< q; i++)
	{
		cin>>x;

		ans = bsearch(n, x);
		if(ans != -1)
			printf("%d\n", ans - 1 + 1);
		else
			printf("%d\n", 0);
	}

	return 0;
}
