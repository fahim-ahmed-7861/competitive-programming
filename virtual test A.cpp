#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
//#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

   int n,a,b;

   while(sf(n)==1)
   {
       int sum=0,i;
       if(n==-1)break;

       vector< pair <int,int> > v;

       for(int i=0; i<n; i++)
       {
           sf(a);
           sf(b);

           v.push_back(make_pair(a,b));
       }
       sum=v[0].first*v[0].second;


       for(i=1; i<n; i++)
       {
            sum+=(v[i].second-v[i-1].second)*v[i].first;


       }

       cout<<sum<<" miles"<<endl;
   }

}

