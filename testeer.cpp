#include <bits/stdc++.h>
using namespace std;
int mn[300002],mx[300002],a[600002],lst[300002],n,m;
void ad(int x,int y)
{
	while(x<=n+m)
		a[x]+=y,x+=x&(-x);
}
int q(int x)
{
	int s=1;
	while(x)
		s+=a[x],x-=x&(-x);
	return s;
}
int main()
{
	int i,nr;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		mn[i]=mx[i]=i;
		lst[n-i+1]=i;
		ad(1,1);
		ad(i,-1);


	}



	for(i=1; i<=n+m; i++)
        cout<<q(i)<<endl;

	for(i=1;i<=m;i++)
	{
		cin>>nr;
		mn[nr]=1;



		mx[nr]=max(mx[nr],q(lst[nr]));

		//cout<<mx[nr]<<" "<<q(lst[nr])<<" "<<lst[nr]<<endl;

		ad(lst[nr]+1,1);
		ad(n+i,-1);
		lst[nr]=n+i;
	}
	for(i=1;i<=n;i++)
		cout<<mn[i]<<" "<<max(mx[i],q(lst[i]))<<"\n";
	return 0;
}
