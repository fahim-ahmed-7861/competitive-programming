#include<stdio.h>
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
    int i,n,high,low=0,mid,k,p=0,q;

    while(scanf("%d %d",&n,&q)==2)
    {

        if(n==0 && q==0)return 0;
        int ara[n],ara2[q];


        for(i=0; i<n; i++)scanf("%d",&ara[i]);


        bubblesort(ara,n);

        int s=q;

        for(i=0; i<q; i++)scanf("%d",&ara2[i]);
        i=0;
         printf("CASE# %d:\n",++p);
        while(q--)
        {

            low=0;
            high=n-1;
            k=ara2[i++];
            //scanf("%d",&k);


            while(low<=high)
            {
                mid=(low+high)/2;

                if(ara[mid]==k)
                {
                    printf("%d found at %d\n",k,mid+1);
                    break;
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
            if(low>high)printf("%d not found\n",k);
        }
    }
    return 0;
}
