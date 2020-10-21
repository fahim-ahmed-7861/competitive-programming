#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
    int n;
    cin>>n;

    int ara[n+2][n+2];

    int m=n/2,i,j,k=0;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            ara[j][i]=++k;
        }
    }



     for(i=m+1; i<=n; i++)
     {
         for(j=n; j>=0; j--)
         {
             ara[j][i]=++k;
         }
         k--;
     }

     for(i=1; i<=n; i++)
     {
         for(j=1;j<=n; j++)
            cout<<ara[i][j]<<" ";

         cout<<endl;
     }
}
