#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define gcd __gcd(a,b)

int main()
{

   fastread();

   ll i,j,n,m,sum=0,k,t,a,b,cnt=0,q,gk,gkkk;

     string str;


       cin>>t;


       while(t--)
       {


           cin>>n>>m>>q;

           ll row[n+5]={0},co[m+5]={0};
           cnt=0;

           ll odd=0;

           while(q--)
           {
               cin>>a>>b;

               row[a]++;
               co[b]++;
           }
           for(j=1; j<=m; j++)
            if(co[j] & 1)odd++;

            ll even=m-odd;

            for(i=1; i<=n; i++)
            {
                if(row[i] & 1)cnt+=even;

                else cnt+=odd;
            }

           cout<<cnt<<endl;
       }



   // hash fahim









   return 0;









}












