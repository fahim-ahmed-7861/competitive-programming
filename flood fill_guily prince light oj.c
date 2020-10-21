#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
       return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------

char  ara[500][500];
int n,m,cnt;

void fillup(int i,int j)
{
    if(i<0 || j==n || i==m || j<0 || ara[i][j]=='#')
        return;

    ara[i][j]='#';
    cnt++;

    fillup(i,j+1);
    fillup(i,j-1);
    fillup(i-1,j);
    fillup(i+1,j);
}
int main()
{
      fastread();

     int t,a,b,i,j,p=1;

     cin>>t;

     while(t--)
     {
         cin>>n>>m;

         cnt=0;

         for(i=0; i<m; i++)
         {
             for(j=0; j<n; j++)
             {
                 cin>>ara[i][j];

                 if(ara[i][j]=='@')a=i,b=j;
             }
         }

         fillup(a,b);

         //cout<<a<<" "<<b<<endl;

         cout<<"Case "<<p++<<": "<<cnt<<endl;
     }

}
