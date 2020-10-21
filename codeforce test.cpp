#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,i,p;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&p);

        if(p>0)sum1+=p;

        else sum2+=p;
    }

    printf("%d\n",sum1-sum2);

    return 0;
}
