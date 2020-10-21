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

    vector<int>ara;

    vector<pp> vect;
   int s=20000000,i,j,n=sqrt(s);

     for(i=0; i<=s; i++)
    {
       ara.push_back(i);
    }
    ara[0]=ara[1]=0;
    for(i=2; i<=n; i++)
    {
        for(j=i*i; j<=s; j+=i)
        {
            ara[j]=0;
        }
    }
    for(i=0; i<=s; i++)
    {
        if(ara[i]!=0 && ara[i+2]!=0)
            vect.push_back( make_pair(i,i+2) );
    }
    int k;


   while(scanf("%d",&k)==1)
   {

       cout<<"("<<vect[k-1].first<<", "<<vect[k-1].second<<")"<<endl;
   }

   return 0;
}

