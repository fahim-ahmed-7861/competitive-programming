#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tk,i,j,sum;

    scanf("%d %d",&n,&tk);

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n-i; j++)
        {
            sum=10000*i+5000*j+(n-i-j)*1000;

            if(sum==tk)goto xx;
        }
    }
      if(i==n+1)printf("-1 -1 -1\n");

     else  xx:printf("%d %d %d\n",i,j,n-i-j);

     return 0;
}
