#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=-1,k,ara[10000];

    while(scanf("%d",&n)==1)
    {c++;
        ara[c]=n;

        sort(ara,ara+c+1);

        if(c%2==0)
        {
            k=c/2;

          printf("%d\n",ara[k]);
        }

        else
        {
            k=c/2;

            k=ara[k]+ara[k+1];

            k/=2;

            printf("%d\n",k);
        }

    }
   return 0;
}
