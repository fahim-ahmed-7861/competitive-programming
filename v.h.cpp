#include<bits/stdc++.h>
using namespace std;
int bsearch(int ara[],int n,int k)
{
    int low=0,high=n-1,mid;
     while(low<=high)
    {
        mid=(low+high)/2;

        if(ara[mid]==k)
        {
            return 1;
        }
        if(k>ara[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    return 0;
}

void bubblesort(int ara[],int n)
{
    int i,j,temp;
     for(i=1; i<n; i++)
       {
        for(j=0; j<n-i; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

            }

        }

    }
}

int main()
{
    int n,num,i,sum,x,y;

    while(scanf("%d",&n)==1)
    {
        x=0;
        y=0;
        int ara[n+5];

        for(i=0; i<n; i++)cin>>ara[i];

        cin>>num;

       bubblesort(ara,n);

        for(i=0; i<n; i++)
        {
            sum=num-ara[i];

            if( bsearch(ara,n,sum)==1)
            {
                if(sum-ara[i]>x-y || x==0)
                {
                    x=ara[i];
                    y=sum;
                }

            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",x,y);
    }
    return 0;
}
