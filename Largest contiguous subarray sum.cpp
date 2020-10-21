#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int sum(int ara[],int n)
{
    int mx=0,sum=0,i,id=0;

    for(i=0; i<n; i++)
    {
        sum+=ara[i];

        id++;

        if(sum>mx)
        {
            mx=sum;
            cnt=id;
        }

        if(sum<0)sum=0,id=0;

    }
    return mx;
}

void input(int ara[],int n)
{
    for(int i=0; i<n; i++)
        cin>>ara[i];
}
int main()
{
    int n;

    cin>>n;

     int ara[n+1];
    input(ara,n);

    cout<<"max sum: "<<sum(ara,n)<<endl;

    cout<<"max element "<<cnt<<endl;
}
