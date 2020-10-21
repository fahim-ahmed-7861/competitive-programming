#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define out  freopen("output.txt", "w", stdout)

ll tree[100001];

ll query(ll idx)
{
    ll sum=0;

    while(idx>0)
    {
        sum+=tree[idx];

        idx-= idx & (-idx);

    }

    return sum;
}

void update(ll idx,ll x,ll n)
{
    while(idx<=n)
    {
        tree[idx]+=x;

        idx+= idx & (-idx);
    }
}
int main()
{
    fastread();

    ll n,i,j;



    cin>>n;

    ll ara[n+1];

    for(i=1; i<=n; i++)
    {
        cin>>ara[i];

        update(i,ara[i],n);
    }

   ll q,pos;

   cin>>q;

   while(q--)
   {
       cin>>pos;

       cout<<query(pos)<<endl;
   }



}


/*

cin>>i>>j;

       cout<<query(j)-query(i-1)<<endl;

       // for range sum

       */
