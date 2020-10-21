#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastread();

   string str,ctr,ktr,btr;
   int n;


   cin>>n;

   //cin.ignore();

   cin>>str;

   int cnt=0,m=0,i,j;

   for(i=0; i<n-1; i++)
   {
       ctr=str.substr(i,2);

       //cout<<ctr<<endl;

       cnt=0;

       for(j=i; j<n-1; j++)
       {
           ktr=str.substr(j,2);


           if(ctr==ktr)
            cnt++;
       }

       if(m<cnt)
       {
           btr=ctr;
           m=cnt;
       }
   }

   cout<<btr<<endl;

}

