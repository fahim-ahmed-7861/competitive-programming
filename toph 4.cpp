#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        ll n;
        scanf("%lld",&n);

        double m=sqrt(n);

        int num=m;

         m = floor(100000*m)/100000;
         //cout<<m<<endl;

          int hp=m;

          double k=(m-hp)*10000;
          int sum=k;


       if(sum!=0)
       {
           while(sum>0)
           {
               cout<<sum%10;

               sum/=10;
           }
           cout<<".";

           /*while(num>0)
           {
               cout<<num%10;

               num/=10;
           }*/
           cout<<num<<endl;
       }
       else
       {
           cout<<"0000.";

          /* while(num>0)
           {
               cout<<num%10;

               num/=10;
           }*/
           cout<<num<<endl;
       }

    }
}
