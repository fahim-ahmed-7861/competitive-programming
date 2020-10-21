#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x) (('a'<=x && x<='z') || ('A'<=x && x<='Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();


    int n,p,i,sum=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>p;

        sum+=p;
    }

    int d=((n-1)*2);

    if(sum==d)printf("Yes\n");

    else printf("No\n");

}
