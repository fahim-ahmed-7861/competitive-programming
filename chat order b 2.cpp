#include<bits/stdc++.h>
using namespace std;
string s[200005];
map<string,int>visit;
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0; i<n; i++)cin>>s[i];

     for(i=n-1; i>=0; i--)
     {
         if(visit[s[i]]!=1)
         {
             cout<<s[i]<<endl;
             visit[s[i]]=1;
         }
     }
     return 0;
}
