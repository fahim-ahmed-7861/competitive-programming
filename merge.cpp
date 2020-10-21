#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    int x=10,f=6,sum;



    vector<int>v,p;

    for(int i=0; i<5; i++)
        cin>>f,v.pb(f);

    for(int i=0; i<5; i++)
        cin>>f,p.pb(f);

        vector<int>ans(v.size()+p.size());

    merge(v.begin(),v.end(),p.begin(),p.end(),ans.begin());


    for(auto x : ans)
        cout<<x<<" ";


}
