#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,p,i,j,k,e=0,h=0,temp;

     scanf("%d %d",&n,&p);
     int ara[n+1];

     int odd[n+1],even[n+1];



     for(i=0; i<n; i++)
     {
         scanf("%d",&ara[i]);
     }


    int mod[n+1];

     for(i=0; i<n; i++)mod[i]=ara[i]%p;

     for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(mod[j]<mod[j+1])
            {
                swap(mod[j],mod[j+1]);
                swap(ara[j],ara[j+1]);

            }

        }

    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            if(mod[i]<mod[j])
            {
                swap(mod[i],mod[j]);
                swap(ara[i],ara[j]);

            }

        }

    }
    for(i=0; i<n; i++)printf("%d\n",ara[i]);


}

