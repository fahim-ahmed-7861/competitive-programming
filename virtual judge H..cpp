#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,num=0,c=0;

    long long sum=0;

    scanf("%d %d",&n,&m);

    int tho[n+5],wield[n+5];

    for(i=0; i<n; i++)
    {
        scanf("%d %d",&tho[i],&wield[i]);

        if(num<tho[i])num=tho[i];
    }
    sort(wield,wield+n);

    reverse(wield,wield+n);
    for(i=0; i<n; i++)
    {
        if(num<wield[i])
        {
            sum+=wield[i];
             c++;
            if(sum>=m)
            {
                 printf("%d\n",c);
                 break;
            }
        }
    }
    if(sum<m)
    {
        sum=m-sum;

        c+=sum/num;

        if(sum%num!=0)c++;

        printf("%d\n",c);
    }

    return 0;

}
