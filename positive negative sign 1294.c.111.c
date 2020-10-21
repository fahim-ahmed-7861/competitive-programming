#include <stdio.h>
int main()
{

    int t,cs;
    long long m;
    long long n;
    long long ans;

    scanf("%d", &t);

    for (cs = 1; cs <= t; cs++)
    {
        scanf("%lld %lld", &n, &m);
        ans = (n * m ) / 2;

        printf("Case %d: %lld\n", cs, ans);
    }

}
