#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll Max=100000+5;
ll ara[Max+1],tree[Max*4+10];
void update(ll node , ll b ,ll e ,ll pos, ll val)
{   if(pos>e || pos<b)return ;
       if(b==e)
       { tree[node]=val;
           return ;
       }
       ll left=node*2;
       ll right=node*2+1;
       ll mid=(b+e)/2;
       update(left,b,mid,pos,val);
       update(right,mid+1,e,pos,val);
       tree[node]=tree[left]+tree[right];
}
ll query(ll node , ll b ,ll e ,ll i,ll j)
{     if(i>e || j<b)return 0;
       if(i<=b && j>=e) return tree[node];
       ll left=node*2;
       ll right=node*2+1;
       ll mid=(b+e)/2;
       ll p1=query(left,b,mid,i,j);
       ll p2=query(right,mid+1,e,i,j);
       return p1+p2;
}
int main()
{    ll n,i;
     cin>>n;
     for(i=1; i<=n; i++)
     {  cin>>ara[i];
         update(1,1,n,i,ara[i]);
     }
     for(i=0; i<=14; i++)cout<<tree[i]<<" ";
     cout<<endl;
     ll q;
     cin>>q;
     while(q--)
     {   ll i,j;
         cin>>i>>j;
         cout<<query(1,1,n,i,j)<<endl; }}
