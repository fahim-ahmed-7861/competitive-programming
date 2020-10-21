#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,a;

    map<int,int>mp;

    for(int i=0; i<2; i++)
    {
        cin>>k>>a;

        mp[k]=a;

    }

   /* for(it=m.begin(); it!=m.end(); it++)
    {
        printf("%c %d\n",it->first,it->second);
    }*/

    for(auto x : mp)
        cout<<x.first<<" "<<x.second<<endl;
}
