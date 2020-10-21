#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pll          pair<ll,ll>
#define pb           push_back
#define eb           emplace_back
#define F            first
#define S            second
#define vll(v)       v.begin(),v.end()
#define bug(a)       cerr << #a << " : " << a << endl;
#define fastread()     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int Max = 2e5+10;



typedef struct
{
    ll sum,prefixsum,suffixsum,maxsum;
}Node;

Node tree[Max*4];
ll ara[Max+10],n;



void build(ll node,ll l,ll r)
{
     if(l==r)
     {
         tree[node].maxsum=ara[l];
         tree[node].prefixsum=ara[l];
         tree[node].suffixsum=ara[l];
         tree[node].sum=ara[l];

         return ;
     }

    ll mid=(l+r)/2;

    ll left=(node*2);
    ll right=(node*2)+1;

    build(left,l,mid);
    build(right,mid+1,r);


    tree[node].sum=tree[left].sum+tree[right].sum;

    tree[node].prefixsum=max(tree[left].prefixsum,
                             tree[left].sum+tree[right].prefixsum);

    tree[node].suffixsum=max(tree[right].suffixsum,
                             tree[left].suffixsum+tree[right].sum);

    tree[node].maxsum=max(tree[left].maxsum,max(tree[right].maxsum,
                    max(tree[node].prefixsum,max(tree[node].suffixsum,
                      tree[left].suffixsum+tree[right].prefixsum))));

}

void update(ll node,ll l,ll r,ll pos)
{
     if(l==r)
     {
         tree[node].maxsum=ara[l];
         tree[node].prefixsum=ara[l];
         tree[node].suffixsum=ara[l];
         tree[node].sum=ara[l];

         return ;
     }

    ll mid=(l+r)/2;

    ll left=(node*2);
    ll right=(node*2)+1;


   if(pos<=mid) update(left,l,mid,pos);
   else  update(right,mid+1,r,pos);


    tree[node].sum=tree[left].sum+tree[right].sum;

    tree[node].prefixsum=max(tree[left].prefixsum,
                             tree[left].sum+tree[right].prefixsum);

    tree[node].suffixsum=max(tree[right].suffixsum,
                             tree[left].suffixsum+tree[right].sum);

    tree[node].maxsum=max(tree[left].maxsum,max(tree[right].maxsum,
                    max(tree[node].prefixsum,max(tree[node].suffixsum,
                      tree[left].suffixsum+tree[right].prefixsum))));

}


Node query(ll node,ll b,ll e,ll l,ll r)
{
      Node result;

      result.sum=result.prefixsum=result.maxsum=result.suffixsum=INT_MIN;



      if(r<b || e<l)
        return result;

      if(l<=b && e<=r)
        return tree[node];


      ll mid=(b+e)/2;
      ll left=(node*2);
      ll right=(node*2)+1;



      if(mid<l)
        return query(right,mid+1,e,l,r);

      if(mid>=r)
         return query(left,b,mid,l,r);


      Node Left=query(left,b,mid,l,r);

      Node Right=query(right,mid+1,e,l,r);

      result.sum=Left.sum+Right.sum;


     result.prefixsum=max(Left.prefixsum,
                             Left.sum+Right.prefixsum);

    result.suffixsum=max(Right.suffixsum,
                            Left.suffixsum+Right.sum);

    result.maxsum=max(Left.maxsum,max(Right.maxsum,
                    max(result.prefixsum,max(result.suffixsum,
                      Left.suffixsum+Right.prefixsum))));
}


int main()
{
       fastread();

       ll i,q,pos,v;

       cin>>n>>q;

       for(i=1; i<=n; i++)cin>>ara[i];

       build(1,1,n);


        while(q--)
        {
            cin>>pos>>v;

            ara[pos]=v;

            update(1,1,n,pos);

            cout<<query(1,1,n,1,n).maxsum<<endl;
        }






}
