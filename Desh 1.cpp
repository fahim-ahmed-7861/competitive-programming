#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;

int main()
{
    int t,c;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n+1];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)c++;
        }

        cout<<n-c<<endl;

    }
}
