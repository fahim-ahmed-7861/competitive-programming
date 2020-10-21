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

int ara[100005];
int tree[400005];

int query(int node,int b,int e,int p,int k)
{


	if(p<=b && e<=k) {
		return tree[node];
	}
    if(b>k || e<p)return INT_MAX;

    int mid=(b+e)/2;

   int x= query(2*node,b,mid,p,k);
   int y=query((2*node)+1,mid+1,e,p,k);

   return min(x,y);


}


int segment_tree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        return ara[b];
    }

    int mid=(b+e)/2;

   int x= segment_tree(2*node,b,mid);
   int y=segment_tree((2*node)+1,mid+1,e);

   tree[node]=min(x,y);

   return tree[node];
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    int n,q,t,l=1;

    sf(t);

    while(t--)
    {
    sf(n);
    sf(q);

    for(int i=1; i<=n; i++)
        scanf("%d",&ara[i]);

    segment_tree(1,1,n);
    int x,y;
    printf("Case %d:\n",l++);

      while(q--)
      {
          sf(x);
          sf(y);
          printf("%d\n",query(1,1,n,x,y));
      }
    }
}

