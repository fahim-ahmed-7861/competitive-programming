#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,num=0,k,p,i,sum=0;
    cin>>n>>m;

    sum=240-m;

    for(i=5,k=2;i<=sum && num<n;k++ )
    {
       num++;
       p=5*k;

       i+=p;

    }
   cout<<num<<endl;

   return 0;
}
