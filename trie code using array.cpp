#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
const int Max_node = 1e6 + 10;
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
bool isword[Max_node];
int node[Max_node][26];

void initialize()
{
    root=0;
    nnode=0;
    for(int i=0; i<26; i++)
    {
        node[root][i]=-1;
    }
}

void Insert(string str,int len)
{
       int now=root,i;

        for(i=0; i<len; i++)
        {
            int id=str[i]-'a';

            if(node[now][id]==-1)
            {
                node[now][id]=++nnode;


                for(int j=0; j<26; j++)
                    node[nnode][j]=-1;
            }

            now=node[now][id];
        }

        isword[now]=true;
}


bool Search(string str,int len)
{
    int now=root,i;

      for(i=0; i<len; i++)
      {
          int id=str[i]-'a';

          if(node[now][id]==-1)return false;

          now=node[now][id];
      }

      return isword[now];
}

int main()
{
    fastread();
      initialize();

     int n;

     cin>>n;

     while(n--)
     {
         string str;

         cin>>str;

         Insert(str,str.size());
     }

     int q;

     cin>>q;

     while(q--)
     {
         string str;

         cin>>str;

         if(Search(str,str.size()))cout<<"YES"<<endl;

         else cout<<"NO"<<endl;
     }
}




