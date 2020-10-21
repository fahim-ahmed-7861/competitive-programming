#include<bits/stdc++.h>
using namespace std;
#define fast() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void input_section(long long ara[],long long n)
{
    for(long long i=0; i<n; i++)cin>>ara[i];
}
int main()
{
   fast();

    long long i,t,n,s;

   cin>>t;

   while(t--)
   {
       cin>>n;

       long long g[n+3],f[n+3],mx=0,sum;

       input_section(g,n);
       input_section(f,n);


       for(i=0; i<n; i++)
       {
            sum=g[i]*20;

           sum-=f[i]*10;

           mx=max(mx,sum);
       }

       cout<<mx<<endl;
   }


   return 0;


}

