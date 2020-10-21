#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();
    int G=0,i,j,N=500;
    while(scanf("%d",&N) && N)
    {
        if(N==0)
            printf("0\n");

        else
        {
            for(i=1; i<N; i++)
            {
                for(j=i+1; j<=N; j++)
                {
                    G+=__gcd(i,j);

                }
            }

            printf("%d\n",G);
            G=0;
        }
    }

    return 0;
}

