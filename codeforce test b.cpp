#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k=0,sum;

    scanf("%d %d %d",&t,&n,&m);

    while(t>=4)
    {
        t/=2;
        k++;

    }

    sum=abs(n-m);

        sum=sum/2;
        sum++;

    if(sum>=k)printf("Final!\n");

    else printf("%d\n",sum);

    return 0;
}
