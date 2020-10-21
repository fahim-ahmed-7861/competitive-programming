#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;
int n;
double w, a[2*MAX];

void input()
{
    for(int i = 0; i < 2*n; i++)
        scanf("%lf", &a[i]);
}

void solve()
{
    sort(a, a + 2*n);

    double sum=a[n-1]*.5*n;
    cout<<sum<<endl;

    sum+=a[(2*n)-1]*n;

    printf("%lf\n",sum);
  //  printf("%lf\n",min(2*a[0], a[n])*1.5*n);
    printf("%.6lf\n", min(min(2*a[0], a[n])*1.5*n, w));
}

int main()
{
    while(scanf("%d%lf", &n, &w) != EOF)
    {
        input();
        solve();
    }
    return 0;
}







