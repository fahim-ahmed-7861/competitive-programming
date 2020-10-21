#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define F first
#define S second
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define eb emplace_back
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define minheap int,vector<int>,greater<int>
#define bug(a) cout<<#a<<" "<<a<<endl;
#define bug1() cout<<"bug"<<endl;
const int Max = 4e5 + 10;


typedef struct
{

    ll sum,prop;

} Lazy;

Lazy tree[Max+10];




void build(ll node,ll l,ll r)
{
    if(l==r)
    {
        tree[node].sum=tree[node].prop=0;

        return ;
    }

    ll left=node*2,right=(node*2)+1,mid=(l+r)/2;

    build(left,l,mid);

    build(right,mid+1,r);

    tree[node].sum=tree[node].prop=0;


}

void propagate(ll node,ll l,ll r)
{
    if(tree[node].prop==-1)return ;

     ll left = (node << 1),right = (node << 1) + 1,mid = (l + r) >> 1;


     tree[node].sum=tree[node].prop*(r-l+1);


     if(l!=r)
     {
         if(left<Max)
            tree[left].prop=tree[node].prop;

         if(right<Max)
          tree[right].prop=tree[node].prop;
     }


    tree[node].prop=-1;



}

void update(ll node,ll l,ll r,ll a,ll b,ll value)
{

    propagate(node,l,r);

    if(r<a || l>b)
        return ;

    if(a<=l and r<=b)
    {

        tree[node].prop=value;

         propagate(node,l,r);

        return ;
    }

   ll left=node*2,right=(node*2)+1,mid=(l+r)/2;


    update(left,l,mid,a,b,value);

    update(right,mid+1,r,a,b,value);

    tree[node].sum=tree[left].sum+tree[right].sum;

}


int query(ll node,ll l,ll r,ll a,ll b)
{
    propagate(node,l,r);
    if(r<a || l>b)
        return 0;

    if(a<=l and r<=b)
        return tree[node].sum;



    ll left = (node << 1),right = (node << 1) + 1,mid = (l + r) >> 1;

    ll p=query(left,l,mid,a,b);

    ll q=query(right,mid+1,r,a,b);


    return p+q;

}


int main()
{

    fastread();

    ll i,j,n,m,p,sum=0,k,t,a,b,c,d,cas=1,q;


    string str;

    bool flag=true;



      scanf("%d",&t);

       ll l,r,value;

       while(t--)
       {
          scanf("%d %d",&n,&q);

          printf("Case %d:\n",cas++);

           build(1,1,n);

           while(q--)
           {
               scanf("%d %d %d",&c,&l,&r);


               if(c==1)
               {
                  scanf("%d",&value);

                   update(1,1,n,l+1,r+1,value);
               }
               else
                {
                    a=query(1,1,n,l+1,r+1);
                    b=r-l+1;

                    if(a%b)
                    {
                        ll g=__gcd(a,b);

                        printf("%d/%d\n",a/g,b/g);
                    }
                    else
                        printf("%d\n",a/b);


                }

           }
       }











}

