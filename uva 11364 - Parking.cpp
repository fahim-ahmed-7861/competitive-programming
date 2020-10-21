#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

    int t,n;

    cin>>t;

    while(t--)
    {

        cin>>n;

        //if(n==1)printf("0\n");

        // else{

        int ara[n+1],sum=0;

        for(int i=0; i<n; i++)
            cin>>ara[i];

        sort(ara,ara+n);

        for(int i=1; i<n; i++)
        {
            sum+=ara[i]-ara[i-1];
        }

        cout<<2*sum<<endl;
    }

}


