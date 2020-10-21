#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
typedef long long ll;
const int Max = 1e6 ;
 ll mp[Max+10];
int main()
{
    // string is love

   fastread();

   ll n,m,p,sum=0,k,t,a,b,c,d,cnt=0,q;


     string str,btr,ctr,dtr,ftr;

   bool flag=true;

       cin>>t;


       while(t--)
       {
           ll i,j,ah;
           flag=true;


          memset(mp,0,sizeof(mp));

           cin>>n;

           cnt=0;

           ll ans=0,hans=0;

           for(i=0; i<n; i++)
           {
               cin>>a;

               ans=max(mp[a],ans);

               ll sq=sqrt(a);



                for(j=1; j<=sq; j++)
                {
                    if(a%j==0)
                    {
                        mp[j]++;

                        if(a/j!=j)
                            mp[a/j]++;
                    }
                }

           }

           cout<<ans<<endl;
       }


   return 0;





}

