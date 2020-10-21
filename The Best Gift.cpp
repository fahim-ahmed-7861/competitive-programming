#include <stdio.h>

int main()
{
	int a[11];
	int n,m,i,j,k;
	long long count = 0;
	scanf("%d %d",&n,&m);
	for( i = 1 ; i < 11; i++ )
	{
		a[i] = 0;
	}

	for( i = 0 ; i < n; i++ )
	{
		scanf("%d",&k);
		a[k]++;
	}

	for( i = 1 ; i <= m; i++ )
	{
		for( j = 1; j <= m ; j++ )
		{
			if( i == j )
				continue;
			count = count + (a[i] * a[j]);
		}
	}
	printf("%lld\n", count/2);
	return 0;
