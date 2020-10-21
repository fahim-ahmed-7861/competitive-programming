#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,s=-1,p=-1;
    cin>>n;

    int odd[n+5],even[n+5];

    for(i=0; i<n; i++)
    {
        scanf("%d",&k);

        if(k%2==0)even[++p]=k;

        else odd[++s]=k;
    }
    sort(even,even+p+1);

    sort(odd,odd+s+1);

    for(i=0; i<=p; i++)printf("%d\n",even[i]);

    for(i=s; i>=0; i--)printf("%d\n",odd[i]);
}
