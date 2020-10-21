#include<bits/stdc++.h>
using namespace std;
#define fast() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void inputa(long long ara[],long long n)
{
    for(long long i=1; i<=n; i++)cin>>ara[i];
}
int main()
{
   fast();

   long long i,j,n,m,p,t;

   cin>>t;

   while(t--)
   {
      cin>>n;
      long long ara[n+3],left,right;

      inputa(ara,n);

     vector<long long>z(n),b;

     for(i=0; i<n; i++)
        cin>>z[i];

      long long c[n+5]={0};

      for(i=1; i<=n; i++)
      {
          left=max(0ll,i-ara[i]);

          right=min(n,i+ara[i]);

          c[left]++;

          c[right+1]--;

      }

      for(i=1; i<=n; i++)
      {
          c[i]+=c[i-1];
          b.push_back(c[i]);
      }

      sort(b.begin(),b.end());
      sort(z.begin(),z.end());

      if(b==z)cout<<"YES"<<endl;

      else cout<<"NO"<<endl;


   }

   return 0;

}

