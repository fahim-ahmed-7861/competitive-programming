#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;

    cin>>n;

    int a[n+1],ara[n+1],bra[n+1],cra[n+1],j=0,p=0,c=0,f=0;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0,f=0; i<n; i++,f++)
    {
        cin>>k;

        if(k==1)ara[j++]=a[f];

        else if(k==2)
        {
           // cout<<a[f]<<" "<<k<<endl;
            bra[p++]=a[f];

           // cout<<bra[p]<<" "<<k<<endl;
        }

        else if(k==3)cra[c++]=a[f];


    }
    sort(ara,ara+j);

    sort(bra,bra+p);

    sort(cra,cra+c);

    if(j==0 || p==0)
    {
        printf("%d\n",cra[0]);
    }

    else if(c==0)
    {
        printf("%d\n",ara[0]+bra[0]);
    }

    else
    {
        int sum=ara[0]+bra[0];

      if(sum<cra[0])
     {
         printf("%d\n",sum);
     }

     else printf("%d\n",cra[0]);
    }

    return 0;

}
