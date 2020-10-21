#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    int price;
    int id;
    double ratio;
    int weight;
}one;
bool compare(one a,one b)
{
    return a.ratio>b.ratio;
}
int main()
{
    one ara[100];
    int n,w,i;

    double sum=0;
    cin>>n>>w;

    for(i=0; i<n; i++) cin>>ara[i].id>>ara[i].price>>ara[i].weight;


    for(i=0; i<n; i++)
    {
        ara[i].ratio=(double)ara[i].price/ara[i].weight;
    }

    sort(ara,ara+n,compare);

    for(i=0; i<n; i++)
    {
        if(ara[i].weight>w)
        {
            sum+=ara[i].ratio*w;

            cout<<ara[i].id<<endl;

            break;
        }
        else
        {
            sum+=ara[i].weight*ara[i].ratio;
            w=w-ara[i].weight;

            cout<<ara[i].id<<endl;

        }
    }

    cout<<sum<<endl;
}
