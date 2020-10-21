#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef pair<int,int>pii;
typedef pair<ll,pair<ll,ll>>plll;
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
//#define mp make_pair
#define pb push_back
#define pp pop_back
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
const int Max_node = 6e6 + 10;
const int Mod = 1e9 + 7;
bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)
        return 0;

    return a/__gcd(a,b)*b;
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2018
//-------------------------------------------------------------------------------------------------------------------



int root,nnode;
int node[Max_node][2];
ll cnt[Max_node];

void initialize()
{
    root=0;
    nnode=0;
   memset(node,-1,sizeof(node));
}


void Insert(ll x)
{

    int now=0,i;

       for(i=31; i>=0; i--)
       {
           ll bit=(x>>i)&1;

           if(node[now][bit]==-1)
            node[now][bit]=++nnode;


          now=node[now][bit];

          cnt[now]++;
       }
}

void Delete(ll x)
{
    int now=0,i;

       for(i=31; i>=0; i--)
       {
           ll bit=(x>>i)&1;


          now=node[now][bit];

          cnt[now]--;
       }
}



ll query(ll x)
{
    root=0;
    int now=root,i,ans=0;

      for(i=31; i>=0; i--)
       {
           ll bit=(x>>i)&1;

          if(cnt[node[now][!bit]]>0)
          {
             ans|=(1<<i);  // ANS jodi long long hoy tahole 1LL<<i aibabay liktay hobe

              now=node[now][!bit];

          }
          else now=node[now][bit];





       }

     return ans;
}

int main()
{
    fastread();
      initialize();

      ll t;



         cin>>t;

         char ch;

         ll x;

         Insert(0);

         while(t--)
         {
             cin>>ch>>x;

             switch(ch)
             {
                 case '+' : Insert(x);

                 break;

                 case '-' : Delete(x);

                 break;

                 case '?' :
                    {
                        x=query(x);
                        cout<<x<<endl;
                    }
             }
         }




}

