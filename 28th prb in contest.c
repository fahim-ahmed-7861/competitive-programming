#include<stdio.h>
int main()
{
    int i,n,p,T;
    scanf("%d",&T);

    while(T--)
    {
        p=0;
        scanf("%d",&n);
        int ara[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=0; i<n; i++)
        {
            if(ara[i]<ara[i+1])
            {
                p++;
            }
        }
        printf("%d\n",p);
        if(n==p)
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }

        printf("\n");
    }
    return 0;
}
