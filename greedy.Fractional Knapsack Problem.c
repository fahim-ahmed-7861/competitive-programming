#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    int id;
    int weight;
    int price;
}one;
int main()
{
    one std[100],temp;
    int i,j,n,w,sum=0;

     cin>>n>>w;

     double t;

    for(i=0; i<n; i++)
    {
        cin>>std[i].id>>std[i].weight>>std[i].price;
    }
    double ara[n+5];

    for(i=0; i<n; i++)
    {
        ara[i]=std[i].price/std[i].weight;

        cout<<ara[i]<<endl;
    }

      for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ara[i]>=ara[j])
            {
                temp=std[i];

                std[i]=std[j];

                std[j]=temp;

                t=ara[i];
                ara[i]=ara[j];
                ara[j]=t;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<std[i].id<<" "<<std[i].weight<<" "<<std[i].price<<endl;
    }
    for(i=0; i<n; i++)
    {

        if(std[i].weight>w)
        {
            sum+=ara[i]*w;

            break;
        }
        else
        {
            sum+=ara[i]*std[i].weight;
            w=w-std[i].weight;

        }


    }

    cout<<endl<<sum<<endl;

}
