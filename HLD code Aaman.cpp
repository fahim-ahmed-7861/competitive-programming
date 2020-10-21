#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pii          pair<int,int>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e4+10;

vector<pii>adj[MAX] , idx;

///  For <span class="highlight">HLD</span>
int chainNo , ptr , chainHead[MAX] , chainPos[MAX] , chainIdx[MAX] , sub[MAX];

/// For Segment Tree
int arr[MAX] , tree[4*MAX];

/// For LCA
int dep[MAX] , T[MAX] , P[MAX][20];

void init()
{
    idx.clear();
    for(int i=0;i<MAX;i++)
        adj[i].clear();
    chainNo = 0; ptr = 0;
    memset(chainHead,-1,sizeof chainHead);
    memset(P,-1,sizeof P);
}

/// Segment Tree Part
void segBuild(int pos,int l,int r)
{
    if(l == r)
    {
        tree[pos] = arr[l];
        return;
    }

    int mid = (l+r)/2 , lt = pos*2, rt = pos*2+1;

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

    int mid = (l+r)/2 , lt = pos*2, rt = pos*2+1;

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

    int mid = (l+r)/2 , lt = pos*2, rt = pos*2+1;

    int x = segQuery(lt,l,mid,L,R);
    int y = segQuery(rt,mid+1,r,L,R);

    return max(x,y);
}

/// LCA Part
void DFS(int src,int par,int lev)
{
    dep[src] = lev;
    T[src] = par;
    sub[src]= 1;

    for(int i=0;i<adj[src].size();i++)
    {
        int x = adj[src][i].first;

        if(x == par)
            continue;

        DFS(x,src,lev+1);
        sub[src] += sub[x];


    }
}
void initLCA(int n)
{
    memset(P,-1,sizeof P);

    for(int i=1;i<=n;i++)
        P[i][0] = T[i];

    for(int j=1; 1<<j <n;j++)
    {
        for(int i=1;i<=n;i++)
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

    for(int i=log;i>=0;i--)
    {
        if(dep[u]-(1<<i) >= dep[v])
            u = P[u][i];
    }

    if(u == v)
        return u;

    for(int i=log;i>=0;i--)
    {
        if(P[u][i] != -1 && P[u][i] != P[v][i])
        {
            u = P[u][i];
            v = P[v][i];
        }
    }
    return T[u];
}

/// HLD Part

/// sub[i] : i node ar subtree size

/// ara : tree ta sorted order a takbay for segment tree operation, jebaby hld visit hobe ai babay
/// sort hobay

/// chainIdx : amra pabo ata koto num chain a ache

/// chainPos : ai node puro sorted  tree tay koto pos a ase

/// chainHead : joto ta chain toiri hobe toto tar first vertex ti hocche chain head


void HLD(int cur,int cost,int p)
{
    if(chainHead[chainNo] == -1)
        chainHead[chainNo] = cur;

    chainIdx[cur] = chainNo;
    chainPos[cur] = ptr+1;
    arr[++ptr] = cost;

    int id = -1 , mx = -1 , newCost = -1;

    for(int j=0;j<adj[cur].size();j++)
    {
        pii i = adj[cur][j];



        if(i.first != p && sub[i.first] > mx)
        {
            mx = sub[i.first];
            id = i.first;
            newCost = i.second;
        }
    }

    if(id != -1)
      HLD(id,newCost,cur);


    for(int j=0;j<adj[cur].size();j++)
    {
        pii i = adj[cur][j];

        if(i.first != p && i.first != id)
            chainNo++ ,HLD(i.first,i.second,cur);
    }
}
int query_up(int u,int v)
{
    if(u == v)
        return 0;

    int uchain , vchain = chainIdx[v] , ans = -1;

    while(1)
    {
        uchain = chainIdx[u];

        if(uchain == vchain)
        {
            if(u == v)
                break;

            int val = segQuery(1,1,ptr,chainPos[v]+1,chainPos[u]);
            ans = max(ans,val);
            break;
        }

        int val = segQuery(1,1,ptr,chainPos[chainHead[uchain]],chainPos[u]);
        ans = max(ans,val);

        u = chainHead[uchain];
        u = P[u][0];
    }

    return ans;
}
int ansQuery(int n,int u,int v)
{
    int lca = query(n,u,v);

    int q1 = query_up(u,lca);
    int q2 = query_up(v,lca);

    return max(q1,q2);
}

/// Change Query and Main Function part
void change(int u,int v)
{
    if(chainPos[idx[u].first] > chainPos[idx[u].second])
        u = idx[u].first;
    else
        u = idx[u].second;
    segUpdate(1,1,ptr,chainPos[u],v);
}
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        init();

        int n,u,v,w;

        scanf("%d",&n);

        for(int i=1;i<n;i++)
        {
            scanf("%d%d%d",&u,&v,&w);



            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            idx.emplace_back(u,v);
        }

        DFS(1,-1,0);
        initLCA(n);

       // cout<<chainNo<<endl;
       HLD(1,0,-1);

       cout<<endl;
        for(ll i=0; i<=16; i++)
            {
                cout<<chainHead[i]<<" "<<i<<" "<<arr[i]<<" "<<chainPos[i]<<" "<<chainIdx[i]<<endl;


            }

        segBuild(1,1,ptr);

        char type[105];

        while(scanf("%s",type))
        {
            if(type[0] == 'D')
                break;

            scanf("%d%d",&u,&v);

            if(type[0] == 'C')
                change(u-1,v);
            else
                printf("%d\n",ansQuery(n,u,v));
        }
    }
}

/*

1
16
1 2 2
2 3 3
3 9 4
2 4 2
4 6 5
4 5 12
4 7 1
5 8 10
1 10 3
10 16 6
1 11 14
11 12 15
11 13 16
13 14 5
13 15 9

*/
