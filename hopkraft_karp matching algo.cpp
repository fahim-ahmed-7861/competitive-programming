#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define vec vector
#define pb push_back
#define s(x) scanf("%d",&x)
#define all(x)	x.begin(),x.end()
#define pii pair<int,int>
#define fi first
#define se second
#define mod 1000000007
#define SZ 400005
#define endl "\n"
#define trace(x) cerr << #x << ": " << x << endl
#define fast ios::sync_with_stdio(0);cin.tie(0)

int x, u, v;
vec<int> adj_inp[200001];
/////////////////////////////////////////////////

#define NIL 0
#define INF (1<<28)

vector< int > adj[SZ];
int n, m, match[SZ], dist[SZ];
// n: number of nodes on left side, nodes are numbered 1 to n
// m: number of nodes on right side, nodes are numbered n+1 to n+m
// adj = NIL[0] ∪ adj1[adj[1---n]] ∪ adj2[adj[n+1---n+m]]

bool bfs() {
    int i, u, v, len;
    queue<int> Q;
    for(i=1; i<=n; i++) {
        if(match[i]==NIL) {
            dist[i] = 0;
            Q.push(i);
        }
        else dist[i] = INF;
    }
    dist[NIL] = INF;
    while(!Q.empty()) {
        u = Q.front(); Q.pop();
        if(u!=NIL) {
            for(int v: adj[u]) {
                if(dist[match[v]]==INF) {
                    dist[match[v]] = dist[u] + 1;
                    Q.push(match[v]);
                }
            }
        }
    }
    return (dist[NIL]!=INF);
}

bool dfs(int u) {
    int i, v, len;
    if(u!=NIL) {
        for(int v: adj[u]) {
            if(dist[match[v]]==dist[u]+1) {
                if(dfs(match[v])) {
                    match[v] = u;
                    match[u] = v;
                    return true;
                }
            }
        }
        dist[u] = INF;
        return false;
    }
    return true;
}

int hopcroft_karp_max_match() {
    int matching = 0, i;
    // match[] is assumed NIL for all vertex in adj
    while(bfs())
        for(i=1; i<=n; i++)
            if(match[i]==NIL && dfs(i))
                matching++;
    return matching;
}

void print_matching() {
    for(int i = 1; i <=n ; i++) {
        if(match[i] != NIL)
        cout << i << " " << match[i]-n << endl;
    }
}

void make_bipartite_dfs(int u, int p, int l) {
    if(l%2 and p != -1) {
        adj[u].pb(p+n);
        adj[p+n].pb(u);
    }
    for(int v: adj_inp[u]) {
        if(v!=p) {
            if(l%2) {
            adj[u].pb(v+n);
            adj[v+n].pb(u);
            }
            make_bipartite_dfs(v, u, l+1);
        }
    }
}
void purple()
{
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        cin >> u >> v;
        adj_inp[u].pb(v);
        adj_inp[v].pb(u);
    }
    make_bipartite_dfs(1, -1, 1);
    cout << hopcroft_karp_max_match() << endl;
}

int main() {
   fast;
   purple();
}
