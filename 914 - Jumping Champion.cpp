#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
#define si 1000000
int main()
{
    fastread();
    int i,j,n;

    map<int,int>ara;

    n=sqrt(si);

    for(i=0; i<=si; i++)
    {
        ara[i]=i;


    }

    ara[0]=ara[1]=0;

    for(i=4; i<=si; i+=2 )
    {
        ara[i]=0;
    }

    for(i=3; i<=n; i+=2)
    {
        for(j=i*i; j<=si; j+=i)
        {
            ara[j]=0;
        }
    }


    int t;

    cin>>t;

    while(t--)
    {

    long long s=0,k,p;
    j=0;

    cin>>p>>k;

     long long prime[100000];

     for(i=p; i<=k; i++)
    {
      if(ara[i]!=0)
      {
        prime[j++]=ara[i]-s;

        s=ara[i];
      }

    }

    prime[0]=0;


    sort(prime,prime+j);

    long long c=0,sum=0,m=0,pos=-1;


   for(i=1; i<j; i++)
   {
       if(prime[i]==prime[i-1])c++;

       else
       {
           if(c>=m)
           {

               if(c!=m)pos=prime[i-1];

               else pos=-1;

                m=c;

           }
           c=0;


       }
   }

   if(pos!=-1 || j==2)
   {
       if(pos==-1)printf("The jumping champion is %lld\n",prime[1]);
      else  printf("The jumping champion is %lld\n",pos);
   }

   else printf("No jumping champion\n");
    }

  return 0;
}
