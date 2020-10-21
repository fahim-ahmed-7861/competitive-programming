#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define pp pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define mod 1000000007;


int main()
{
   fastread();

   int ara[]={2,1,4,1,54};
   int n=5;

   set<int>s(ara,ara+n);

   //s.erase(s.begin());

   cout<<s.size()<<endl;

   multiset<int>ms(ara,ara+n);

   multiset<int>:: iterator it;
 set<int>:: iterator kt;

   /*  for(it=ms.begin(); it!=ms.end(); it++)
        cout<<*it<<" ";*/

       // cout<<endl;

       kt=s.find(0);

      if(kt!=s.end())cout<<"found\n";

      else cout<<"not\n";

       //cout<<ms.count(1)<<endl;

       s.insert(16);

     //  s.erase(2);

        for(kt=s.begin(); kt!=s.end(); kt++)
            cout<<*kt<<" ";

        cout<<endl;

        cout<<ms.size()<<endl;
}
