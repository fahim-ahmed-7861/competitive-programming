#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define eb           emplace_back
#define F              first
#define S              second
#define pii          pair<int,int>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e4+10;

vector<pii>adj[MAX], idx;

///  For HLD
int chainNo, ptr, chainHead[MAX], chainPos[MAX], chainIdx[MAX], sub[MAX];

/// For Segment Tree
int arr[MAX], tree[4*MAX];

/// For LCA
int dep[MAX], T[MAX], P[MAX][20];

void init()
{
    idx.clear();

    for(int i=0; i<=MAX; i++)
        adj[i].clear();

    memset(chainHead,-1,sizeof(chainHead));

    memset(P,-1,sizeof(P));

    chainNo=0,ptr=0;

    return ;
}
/// Segment Tree Part
void segBuild(int pos,int l,int r)
{
    if(l == r)
    {
        tree[pos] = arr[l];
        return;
    }

    int mid = (l+r)/2, lt = pos*2, rt = pos*2+1;

    segBuild(lt,l,mid);
    segBuild(rt,mid+1,r);

    tree[pos] = max(tree[lt],tree[rt]);
}
void segUpdate(int pos,int l,int r,int idx,int val)
{
    if(l > idx || r < idx)
        return;
    else if(l == r && l == idx)
    {
        tree[pos] = val;
        return;
    }

    int mid = (l+r)/2, lt = pos*2, rt = pos*2+1;

    segUpdate(lt,l,mid,idx,val);
    segUpdate(rt,mid+1,r,idx,val);

    tree[pos] = max(tree[lt],tree[rt]);
}
int segQuery(int pos,int l,int r,int L,int R)
{
    if(l > R || r < L)
        return 0;
    else if(l >= L && r <= R)
        return tree[pos];

    int mid = (l+r)/2, lt = pos*2, rt = pos*2+1;

    int x = segQuery(lt,l,mid,L,R);
    int y = segQuery(rt,mid+1,r,L,R);

    return max(x,y);
}

void DFS(int src,int par,int level)
{
    T[src]=par;
    dep[src]=level;
    sub[src]=1;

    for(auto x : adj[src])
    {
        if(x.F!=par)
        {
            DFS(x.F,src,level+1);

            sub[src]+=sub[x.F];
        }
    }

    return ;
}
void initLCA(int n)
{
    memset(P,-1,sizeof P);

    for(int i=1; i<=n; i++)
        P[i][0] = T[i];

    for(int j=1; 1<<j <n; j++)
    {
        for(int i=1; i<=n; i++)
        {
            if(P[i][j-1] != -1)
                P[i][j] = P[P[i][j-1]][j-1];
        }
    }
}
int query(int n,int u,int v)
{
    if(dep[u] < dep[v])
        swap(u,v);

    int log = log2(n);

    for(int i=log; i>=0; i--)
    {
        if(dep[u]-(1<<i) >= dep[v])
            u = P[u][i];
    }

    if(u == v)
        return u;

    for(int i=log; i>=0; i--)
    {
        if(P[u][i] != -1 && P[u][i] != P[v][i])
        {
            u = P[u][i];
            v = P[v][i];
        }
    }
    return T[u];
}

int query_up(int u,int v)
{
    if(u==v)return 0;

    int uchain, vchain = chainIdx[v], ans = -1,val;


    while(1)
    {
        uchain=chainIdx[u];

        if(uchain==vchain)
        {
            if(u==v)
                break;

            val=segQuery(1,1,ptr,chainPos[v]+1,chainPos[u]);

            ans=max(ans,val);
            break;
        }

        val=segQuery(1,1,ptr,chainPos[chainHead[uchain]],chainPos[u]);

        ans=max(ans,val);

        u=chainHead[uchain];

        u=P[u][0];
    }

    return ans;



}

int ansQuery(int n,int u,int v)
{
    int lca=query(n,u,v);

    int q1=query_up(u,lca);
    int q2=query_up(v,lca);

    return max(q1,q2);
}

void change(int u,int v)
{
    if(chainPos[idx[u].F]>chainPos[idx[u].S])
        u=idx[u].F;

    else u=idx[u].S;

      segUpdate(1,1,ptr,chainPos[u],v);

}
void HLD(int cur,int cost,int p)
{
    if(chainHead[chainNo]==-1)
        chainHead[chainNo]=cur;


    chainIdx[cur]=chainNo;
    chainPos[cur]=++ptr;
    arr[ptr]=cost;

    int id=-1,mx=-1,newCost=-1;

    for(auto x : adj[cur])
    {
        if(x.F!=p && sub[x.F]>mx)
        {
            mx=sub[x.F];
            newCost=x.S;
            id=x.F;
        }
    }

    if(id!=-1)
        HLD(id,newCost,cur);


    for(auto x : adj[cur])
    {
        if(x.F!=p && x.F!=id)
        {
            chainNo++;
            HLD(x.F,x.S,cur);
        }
    }

    return ;

}


int main()
{
    FastRead;

    int t,u,n,v,w;

    scanf("%d",&t);

    while(t--)
    {
        init();
        scanf("%d",&n);

        for(int i=1; i<n; i++)
        {
            scanf("%d %d %d",&u,&v,&w);

            adj[u].eb(v,w);
            adj[v].eb(u,w);

            idx.eb(u,v);
        }


        DFS(1,-1,0);

        initLCA(n);

        HLD(1,0,-1);

        segBuild(1,1,ptr);

        /*cout<<endl;
        for(ll i=0; i<=16; i++)
        {
            cout<<chainHead[i]<<" "<<i<<" "<<arr[i]<<" "<<chainPos[i]<<" "<<chainIdx[i]<<endl;


        }*/

        char test[20];

        while(1)
        {
            scanf("%s",test);

            if(test[0]=='D')
                break;

                 scanf("%d %d",&u,&v);

            if(test[0]=='Q')
            {

                printf("%d\n",ansQuery(n,u,v));
            }
            else
                change(u-1,v);
        }
    }
}


