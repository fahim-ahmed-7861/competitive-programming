#include<stdio.h>
void quicksort(long long ara2[],long long p,long long r)
{
    long long q;
    if(p<r)
    {
        q=partition(ara2,p,r);
        //printf("%d\n",q);
        quicksort(ara2,p,q-1);
        quicksort(ara2,q+1,r);
    }

}
int main()
{
    int n;
    scanf("%d",&n);

    long long ara[n],x,temp,ara2[n],a,b,sum=0;
    long long  i,j,p=0,r=n-1,k;

    for(i=0; i<n; i++)
    {
        scanf("%lld",&ara[i]);
        ara2[i]=ara[i];
    }

    quicksort(ara2,p,r);


for(i=0; i<n-1; i++)
    {

        for(j=0; j<n; j++)
        {
            if(ara2[i]==ara[j])a=j;

            else if(ara2[i+1]==ara[j])b=j;
        }
        printf("%lld %lld\n",a,b);

        sum+=abs(a-b);
        printf("%lld\n",sum);

    }
    printf("%lld\n",sum);



    for(i=0; i<n; i++)
    {
        printf("%lld ",ara2[i]);
    }
}
long long partition(long long ara2[],long long p,long long r)
{
    long long  x=ara2[r],j,temp;
    long long i=p-1;


    for(j=p; j<=r-1; j++)
    {
        if(ara2[j]<=x)
        {
            i++;
            temp=ara2[i];
            ara2[i]=ara2[j];
            ara2[j]=temp;

        }
    }
    temp=ara2[i+1];
    ara2[i+1]=ara2[r];
    ara2[r]=temp;

    return i+1;
}

