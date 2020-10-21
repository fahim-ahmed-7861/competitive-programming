#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n+1];
         bool flag=false;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]==47)flag=true;
        }

        if(n==1)
        {
            cout<<0<<endl<<a[0]<<endl;

            continue;
        }

       if(flag==false)
        for(int i=0; i<n; i++)
        {
            flag=true;
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    if(__gcd(a[i],a[j])==1)
                    {
                        flag=false;
                        break;
                    }
                }
            }
            if(flag){a[i]=47; c++;}
        }
        cout<<c<<endl;
        for(int i=0; i<n-1; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
