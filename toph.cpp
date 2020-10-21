#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//typedef pair<ll,int>pp;
#define sf(a) scanf("%lld",&a)
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
//#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
  int n,t;

  scanf("%d",&t);

  while(t--)
  {
      ll n;

      sf(n);

       double sum=sqrt(n);

        int s=sum;

       double k=sum-s;

           int hp=k*10000;



       int  sum1=0;
      if(hp!=0)
      {
          int  lp=hp;
       while(hp>0 )
       {
           sum1=(hp%10);

           cout<<sum1;

           hp=hp/10;
       }
       if(lp<1000)cout<<"0";

       cout<<".";

         while(s>0)
         {
             cout<<s%10;

             s/=10;
         }

         cout<<endl;
      }

      else
      {
          printf("0000.");

          while(s>0)
         {
             cout<<s%10;

             s/=10;
         }
         cout<<endl;
      }
  }

  return 0;
}
