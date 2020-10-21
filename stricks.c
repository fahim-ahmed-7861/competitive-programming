#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int temp,n,i,j,ara[1004],p=0,ara1[1004],max=0,k=0;
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(ara[i]==ara[j])
                {
                    if(ara1[k-1]!=ara[i])
                       {
                           ara1[k]=ara[j];
                           k++;
                           break;
                       }

                }
            }
        }
         for(i=0;i<k;i++)

        for(j=i+1;j<k;j++)
        {
            if(ara1[i]<ara1[j])
            {
                temp=ara1[i];
                ara1[i]=ara1[j];
                ara1[j]=temp;
            }
        }
        max=ara1[0];

        for(i=1; i<k; i++)
        {
            if(max!=ara1[i])
            {
                p=ara1[i];

               break;
            }
        }



        if(max>0 && p>0) printf("%d\n",max*p);

        else printf("-1\n");

    }
    return 0;
}
