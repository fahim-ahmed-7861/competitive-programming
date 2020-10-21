#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sf(a) scanf("%d",&a)
const int Max =1e5;

struct info
{
   ll prop,sum;
}tree[Max*4+10];

int ara[Max+5];


void update(int node, int b,int e,int i,int j,ll x)
{

    if(i>e || j<b)
        return ;

    if(i<=b && e<=j)
    {
        tree[node].sum+=((e-b+1)*x);

        tree[node].prop+=x;

        return ;
    }


    int left=node*2;
    int right=(node*2)+1;

    int mid=(b+e)/2;

    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);

    tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;



}

ll query(int node,int b,int e,int i,int j,ll carry)
{
    if(i>e || j<b)
        return 0;

    if(i<=b && e<=j)
    {


        return tree[node].sum+(carry*(e-b+1));
    }


    int left=node*2;
    int right=node*2+1;

    int mid=(b+e)/2;

    ll p1=query(left,b,mid,i,j,carry+tree[node].prop);
    ll p2=query(right,mid+1,e,i,j,carry+tree[node].prop);

    return p1+p2;
}

int main()
{


    int n,i,j,q,test;

    ll val;

    sf(n);

    for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            update(1,1,n,i,i,ara[i]);
        }

    sf(q);


    while(q--)
    {
        sf(test);

        if(test==1)
        {
            scanf("%d %d %lld",&i,&j,&val);

            update(1,1,n,i,j,val);
        }
        else
        {
            scanf("%d %d",&i,&j);

            printf("%lld\n",query(1,1,n,i,j,0));
        }
    }





}



/*

6
1 3 9 12 6 8

*/














