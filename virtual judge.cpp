#include<bits/stdc++.h>
using namespace std;
int ara[100010], item, pos,n;
void bsearch(int low ,int high)
{

    int mid,p=high;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(ara[mid]==item )
        {
         pos=mid+1;
          return;
        }

        if(item>ara[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    cout<<low<<" "<<mid<<" "<<high<<endl;

    pos=low;

    if(pos==n)pos--;

}

int main()
{
    int i,num,m;

    cin>>n;

    for(i=0; i<n; i++)cin>>ara[i];

    cin>>m;

    sort(ara,ara+n);
    //for(i=0; i<n; i++)cout<<ara[i]<<" ";

    while(m--)
    {
        pos=0;
        cin>>item;

        if(ara[n-1]<=item)cout<<n<<endl;

        else if(ara[0]>=item)
        {
            if(ara[0]>item)cout<<0<<endl;

            else cout<<1<<endl;
        }


        else{
          bsearch(0, (n-1));


        cout<<pos<<endl;
        }
    }
    return 0;
}
