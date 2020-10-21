#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
int main()
{
    int i,j,n,u;

    long double ans=-1,temp;

    scanf("%d %d",&n,&u);

    long double ara[n+5];

     for(i=0; i<n; i++)cin>>ara[i];

     for(i=0; i<n-2; i++)
     {

       int k=upper_bound(ara,ara+n,ara[i]+u)-(ara);

			k--;

			if(k-i>=2)
            {

            long double temp =((ara[k]-ara[i+1])/(ara[k]-ara[i]));

		   ans=max(ans,temp);
		    }

     }

     if(fabs(ans)==-1)printf("-1\n",ans);


     else cout << setprecision(10) << ans << endl;

}
