#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define pp pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
  fastread();

  int t;

  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int sum=0,ara[110],cnt=0;
    for(int i=0; i<100; i++)
    {
        cin>>ara[i];
    }



    for(int i=0; i<=99;  i++)
    {

        if(ara[i]==100)continue;
        if(sum+ara[i]<=n)
        {
            sum+=ara[i];
            cnt++;
        }

        else break;
    }

    cout<<n<<endl<<sum<<endl<<cnt<<endl;
  }
}
