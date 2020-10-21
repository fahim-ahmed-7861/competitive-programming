#include<iostream>
using namespace std;
int n,k,a[1001],point[2001],nxt[2001],tot,v[2001],q[1001],cnt,vis[1001],ans;
void add(int x,int y)
{
	tot++;
	nxt[tot]=point[x];
	point[x]=tot;
	v[tot]=y;
}
void bfs()
{
	q[++cnt]=1;
	vis[1]=true;
	int j=0;
	while (cnt<n)
	{
		int x=q[++j];
		for (int i=point[x];i!=0;i=nxt[i])
		if (!vis[v[i]])
		{
			q[++cnt]=v[i];
			vis[v[i]]=true;
		}
	}
}
void dfs(int x,int p,int dep,int res)
{
	if
        (dep>k) return;
	a[x]-=res;
	for (int i=point[x];i!=0;i=nxt[i])
	if (v[i]!=p)
	{
		dfs(v[i],x,dep+1,res);
	}
}
int main()
{
	cin>>n>>k;
	for (int i=1;i<=n;i++)
	cin>>a[i];
	for (int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}
	bfs();
    for (int i=n;i>=1;i--)
    {
    	int x=q[i];
    	if (a[x]>=0)
    	{
    		ans+=a[x];
    		dfs(x,-1,0,a[x]);
    	}
    }
    cout<<ans<<endl;
}
