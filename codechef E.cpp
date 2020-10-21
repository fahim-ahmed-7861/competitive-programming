#include<bits/stdc++.h>
using namespace std;
#define fast() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
   fast();

   long long i,n,t;

   scanf("%lld",&t);

   while(t--)
   {
      scanf("%lld",&n);

       long long ara[n+4],c[n+4];

       c[0]=0;

      map<long long,long long>mp,fr,la;

       fr[0]=1;

       la[0]=0;

       long long ans=0,sum;

       for(i=1; i<=n; i++)
       {
          scanf("%lld",&ara[i]);

           c[i]=c[i-1]^ara[i];

            if(fr[c[i]])
            {

                sum=mp[c[i]] +((i-la[c[i]]-1)*fr[c[i]]) + (fr[c[i]]-1);


                   mp[c[i]]=sum;

                   ans+=sum;

            }

             la[c[i]]=i;

           fr[c[i]]++;


       }

      scanf("%lld\n",ans);



   }

   return 0;


}



