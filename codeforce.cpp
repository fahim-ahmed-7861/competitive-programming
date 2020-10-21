#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0;
    int k;

    if(p!=0)k=a[p-1];
    else
    {
        if(a[0]-1!=0)
        {
        k=a[0]-1;
        cout<<k<<endl;
        return 0;
        }
    }

    for(int j=p; j<n; j++)
    {
        if(a[j]<=k)
        {
            cnt++;
            break;
        }
    }
    if(cnt)
        cout<<"-1"<<endl;
    else
        cout<<k<<endl;
    return 0;
}
