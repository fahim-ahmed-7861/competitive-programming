#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int>pll;
typedef pair<ll,pair<ll,ll> >pk;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define mp make_pair
#define pb push_back
#define pp pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
bool compare(const pair<int,int> &a,
             const pair<int,int> &b)
{
    return (a.first > b.first);
}

char ara[110][110];
int n,m,cnt;

void fillup(int i,int j)
{
    if(i<0 || i==n || j==m || j<0 || ara[i][j]!='1')
        return ;

    else
    {
        //cout<<i<<" "<<j<<endl;
        ara[i][j]='0';
        cnt++;
    }

    fillup(i-1,j-1);
    fillup(i+1,j+1);
    fillup(i+1,j);
    fillup(i,j+1);
    fillup(i+1,j-1);
    fillup(i-1,j+1);
    fillup(i-1,j);
    fillup(i,j-1);
}
int main()
{

   int t;
   cin>>t;
   scanf("\n");
    while(t--)
    {

        //cin.ignore();
        bool visit[30][30]={false};
        int i=0,j,mx=0;
        string str;

      while(1)
      {
          getline(cin,str);
         if(str.empty())break;

         m=str.size();

            for(j=0; j<m; j++)
               {
                   ara[i][j]=str[j];

               }


                i++;
     }
     n=m;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ara[i][j]=='1')
                {
                    cnt=0;

                    fillup(i,j);

                    mx=max(cnt,mx);
                }

            }
        }
     cout<<mx<<endl;

     if(t)cout<<endl;
    }
}

