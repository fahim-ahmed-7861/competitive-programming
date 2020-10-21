#include<bits/stdc++.h>
using namespace std;
int ara[100010], item, pos;
void bsearch(int low ,int high)
{
    int mid,p=high;
    while(low<=high)
    {
        mid=(low+high)/2;
       // cout<<'a'<<" "<<low<<" "<<mid<<" "<<high<<endl;


        if(ara[mid]==item )
        {
         pos=mid+1;
            break;
        }
        else if(high==low ||low==mid)
        {
            if(ara[mid+1]==item)pos=mid+2;

          else if(ara[low]>item)
           {
               pos=low;

           }
           else if(ara[high]<item && high!=low)pos=low+2;

           else
           {
               pos=low+1;

           }

           break;
        }
        if(item>ara[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        //cout<<'b'<<" "<<low<<" "<<mid<<" "<<high<<endl;


    }
}

int main()
{
    int n,i,num,m;

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


        else{
          bsearch(0, (n-1));


        cout<<pos<<endl;
        }
    }
    return 0;
}
