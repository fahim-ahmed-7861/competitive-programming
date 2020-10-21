#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,c=0;

    while(cin>>n)
    {
        if(n==0)break;
        c=0;
    long long ara[n+1];
    for(i=0; i<n; i++)cin>>ara[i];

      for (  i = 0; i < n; i++ ) {
            for (  j = i + 1; j < n; j++ )
                if ( ara [i] > ara [j] ) c++;
        }


        printf("%lld\n",c);
    }


    return 0;
}

