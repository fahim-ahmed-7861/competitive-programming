#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,i,t,num;

    cin>>t;

    while(t--)
    {
        num=0;
        cin>>n>>m;

        int ara[n];

        for(i=0; i<n; i++)cin>>ara[i];

        sort(ara,ara+n);
        p=ara[0];
        for(i=0; i<n-1; i++)
        {
            if(ara[i+1]-p>=m)

            {
                num++;
                p=ara[i+1];

            }
        }
        if(num==0)cout<<num<<endl;


       else cout<<num+1<<endl;


    }
    return 0;
}
