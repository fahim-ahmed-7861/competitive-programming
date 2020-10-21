#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();


    int n,i=1;

    while(cin>>n && n)
    {
        int k,sum=0;
        for(int i=1; i<=n; i++)
        {
            cin>>k;

            if(k>0)sum++;

            else sum--;
        }

        printf("Case %d: %d\n",i,sum);

        i++;
    }
}


