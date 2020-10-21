#include<bits/stdc++.h>
using namespace std;

int main()
{
    typedef struct
    {
        int prb;
        int time;

    } student;


    int i,j,n,m,num=0;

    student ara[1000],temp;

    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>ara[i].prb>>ara[i].time;
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i].prb<ara[j].prb)
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
            else if(ara[i].prb==ara[j].prb && ara[i].time>ara[j].time)
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }

        }
    }

    for(i=0; i<n; i++)
    {
        if(ara[m-1].prb==ara[i].prb &&ara[m-1].time==ara[i].time)
            num++;
    }
    cout<<num<<endl;

    return 0;

}



