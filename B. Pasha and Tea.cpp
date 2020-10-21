#include<bits/stdc++.h>
using namespace std;
double ara[200010],w,sum;
int n;
void input()
{

    for(int i=0; i<2*n; i++)scanf("%lf",&ara[i]);
}
void output()
{
    sort(ara,ara+(n*2));

    sum=ara[(2*n)-1]*n;

    sum+=(ara[(2*n)-1]/2)*n;
    printf("%.6lf\n",sum);
}
int main()
{

    scanf("%d %lf",&n,&w);

    input();

    output();
}
