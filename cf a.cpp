#include<bits/stdc++.h>
using namespace std;

//#define ll           long long
#define pii          pair<ll,ll>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e5+10;

struct Node
{
    int left, right, val;

} tree[MAX*20];

int a[MAX], root[MAX], id;
map<int,int>mp,origin;

int update(int pos,int l,int r,int idx)
{
    if(idx > r || idx < l)
        return pos;
    else if(l == r)
    {
        tree[++id] = tree[pos];
        tree[id].val++;
        return id;
    }

    int mid = (l+r)>>1;
    tree[++id] = tree[pos] , pos = id;

    tree[pos].left = update(tree[pos].left,l,mid,idx);
    tree[pos].right = update(tree[pos].right,mid+1,r,idx);

    tree[pos].val = tree[tree[pos].left].val + tree[tree[pos].right].val;

    return pos;
}
int kthElement(int a,int b,int l,int r,int k)
{
    if(l == r)
        return l;

    int mid = (l+r)>>1;
    int cnt = tree[tree[a].left].val - tree[tree[b].left].val;

    if(cnt >= k)
        return kthElement(tree[a].left,tree[b].left,l,mid,k);
    else
        return kthElement(tree[a].right,tree[b].right,mid+1,r,k-cnt);
}
void init(int n,int m)
{
    root[0] = tree[0].left = tree[0].right = tree[0].val = 0;
    for(int i=1;i<=n;i++)
        root[i] = update(root[i-1] , 1 , m , mp[a[i]]);
}
int main()
{
#ifdef Aaman007
    freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
#endif // Aaman007

    FastRead

    int n,q,l,r,k,m=0;

    cin >> n >> q;

    set<int>ss;
    for(int i=1; i<=n; i++)
        cin >> a[i] , ss.insert(a[i]);

    for(auto i : ss)
        mp[i] = ++m , origin[m] = i;

    init(n,m);

    while(q--)
    {
        cin >> l >> r >> k;

        cout << origin[kthElement(root[r],root[l-1],1,m,k)] << endl;
    }
}
